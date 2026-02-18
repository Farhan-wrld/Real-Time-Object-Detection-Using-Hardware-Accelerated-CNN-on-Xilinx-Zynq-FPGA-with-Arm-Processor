import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import datasets, transforms
import numpy as np
import os

# ============================================
# STEP 1: DEFINE THE EXACT CNN ARCHITECTURE
# ============================================
class SimpleCNN(nn.Module):
    def __init__(self):
        super(SimpleCNN, self).__init__()
        # Conv1: 8 filters, 3x3 kernel
        self.conv1 = nn.Conv2d(1, 8, kernel_size=3, stride=1, padding=0)
        self.pool = nn.MaxPool2d(2, 2)
        # Conv2: 16 filters, 3x3 kernel
        self.conv2 = nn.Conv2d(8, 16, kernel_size=3, stride=1, padding=0)
        # FC layer: 16*5*5 = 400 -> 10
        self.fc = nn.Linear(16 * 5 * 5, 10)
    
    def forward(self, x):
        # Input: 1x28x28
        x = self.pool(torch.relu(self.conv1(x)))  # -> 8x13x13
        x = self.pool(torch.relu(self.conv2(x)))  # -> 16x5x5
        x = x.view(-1, 16 * 5 * 5)  # Flatten
        x = self.fc(x)
        return x

# ============================================
# STEP 2: TRAIN THE NETWORK
# ============================================
def train_model():
    print("=" * 50)
    print("STARTING MNIST CNN TRAINING")
    print("=" * 50)
    
    # Setup
    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
    print(f"Using device: {device}")
    
    # Data loading
    transform = transforms.Compose([
        transforms.ToTensor(),
        transforms.Normalize((0.1307,), (0.3081,))
    ])
    
    train_dataset = datasets.MNIST('./data', train=True, download=True, transform=transform)
    test_dataset = datasets.MNIST('./data', train=False, transform=transform)
    
    train_loader = torch.utils.data.DataLoader(train_dataset, batch_size=64, shuffle=True)
    test_loader = torch.utils.data.DataLoader(test_dataset, batch_size=1000, shuffle=False)
    
    # Model, loss, optimizer
    model = SimpleCNN().to(device)
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.Adam(model.parameters(), lr=0.001)
    
    # Training loop
    epochs = 5
    for epoch in range(epochs):
        model.train()
        running_loss = 0.0
        for batch_idx, (data, target) in enumerate(train_loader):
            data, target = data.to(device), target.to(device)
            
            optimizer.zero_grad()
            output = model(data)
            loss = criterion(output, target)
            loss.backward()
            optimizer.step()
            
            running_loss += loss.item()
            
            if batch_idx % 200 == 0:
                print(f"Epoch {epoch+1}/{epochs}, Batch {batch_idx}, Loss: {loss.item():.4f}")
        
        # Test accuracy
        model.eval()
        correct = 0
        total = 0
        with torch.no_grad():
            for data, target in test_loader:
                data, target = data.to(device), target.to(device)
                outputs = model(data)
                _, predicted = torch.max(outputs.data, 1)
                total += target.size(0)
                correct += (predicted == target).sum().item()
        
        accuracy = 100 * correct / total
        print(f"Epoch {epoch+1} - Accuracy: {accuracy:.2f}%")
    
    print("\n✅ TRAINING COMPLETE")
    return model

# ============================================
# STEP 3: EXPORT WEIGHTS TO C HEADER FILES
# ============================================
def export_weights(model):
    print("\n" + "=" * 50)
    print("EXPORTING WEIGHTS TO C HEADER FILES")
    print("=" * 50)
    
    os.makedirs("weights", exist_ok=True)
    
    # Conv1 weights
    conv1_w = model.conv1.weight.detach().cpu().numpy()  # Shape: (8, 1, 3, 3)
    conv1_b = model.conv1.bias.detach().cpu().numpy()    # Shape: (8,)
    
    with open("weights/conv1_weights.h", "w") as f:
        f.write("#ifndef CONV1_WEIGHTS_H\n#define CONV1_WEIGHTS_H\n\n")
        f.write("// Conv1: 8 filters, 1 input channel, 3x3 kernel\n")
        f.write(f"float conv1_w[8][1][3][3] = {{\n")
        for oc in range(8):
            f.write("  {\n")
            for ic in range(1):
                f.write("    {")
                for ki in range(3):
                    f.write("{")
                    f.write(", ".join([f"{conv1_w[oc][ic][ki][kj]:.6f}f" for kj in range(3)]))
                    f.write("}")
                    if ki < 2: f.write(",")
                f.write("}")
                if ic < 0: f.write(",")
            f.write("\n  }")
            if oc < 7: f.write(",")
            f.write("\n")
        f.write("};\n\n")
        
        f.write(f"float conv1_b[8] = {{")
        f.write(", ".join([f"{b:.6f}f" for b in conv1_b]))
        f.write("};\n\n#endif\n")
    
    # Conv2 weights
    conv2_w = model.conv2.weight.detach().cpu().numpy()  # Shape: (16, 8, 3, 3)
    conv2_b = model.conv2.bias.detach().cpu().numpy()    # Shape: (16,)
    
    with open("weights/conv2_weights.h", "w") as f:
        f.write("#ifndef CONV2_WEIGHTS_H\n#define CONV2_WEIGHTS_H\n\n")
        f.write("// Conv2: 16 filters, 8 input channels, 3x3 kernel\n")
        f.write(f"float conv2_w[16][8][3][3] = {{\n")
        for oc in range(16):
            f.write("  {\n")
            for ic in range(8):
                f.write("    {")
                for ki in range(3):
                    f.write("{")
                    f.write(", ".join([f"{conv2_w[oc][ic][ki][kj]:.6f}f" for kj in range(3)]))
                    f.write("}")
                    if ki < 2: f.write(",")
                f.write("}")
                if ic < 7: f.write(",")
                f.write("\n")
            f.write("  }")
            if oc < 15: f.write(",")
            f.write("\n")
        f.write("};\n\n")
        
        f.write(f"float conv2_b[16] = {{")
        f.write(", ".join([f"{b:.6f}f" for b in conv2_b]))
        f.write("};\n\n#endif\n")
    
    # FC weights
    fc_w = model.fc.weight.detach().cpu().numpy()  # Shape: (10, 400)
    fc_b = model.fc.bias.detach().cpu().numpy()    # Shape: (10,)
    
    with open("weights/fc_weights.h", "w") as f:
        f.write("#ifndef FC_WEIGHTS_H\n#define FC_WEIGHTS_H\n\n")
        f.write("// FC: 400 inputs -> 10 outputs\n")
        f.write(f"float fc_w[10][400] = {{\n")
        for i in range(10):
            f.write("  {")
            f.write(", ".join([f"{fc_w[i][j]:.6f}f" for j in range(400)]))
            f.write("}")
            if i < 9: f.write(",")
            f.write("\n")
        f.write("};\n\n")
        
        f.write(f"float fc_b[10] = {{")
        f.write(", ".join([f"{b:.6f}f" for b in fc_b]))
        f.write("};\n\n#endif\n")
    
    print("✅ Exported: weights/conv1_weights.h")
    print("✅ Exported: weights/conv2_weights.h")
    print("✅ Exported: weights/fc_weights.h")

# ============================================
# STEP 4: SAVE TEST IMAGE FOR C++ INFERENCE
# ============================================
def export_test_image():
    print("\n" + "=" * 50)
    print("EXPORTING TEST IMAGE")
    print("=" * 50)
    
    transform = transforms.Compose([
        transforms.ToTensor(),
        transforms.Normalize((0.1307,), (0.3081,))
    ])
    test_dataset = datasets.MNIST('./data', train=False, transform=transform)
    
    # Get first test image
    img, label = test_dataset[0]
    img_np = img.squeeze().numpy()  # Shape: (28, 28)
    
    with open("weights/test_image.h", "w") as f:
        f.write("#ifndef TEST_IMAGE_H\n#define TEST_IMAGE_H\n\n")
        f.write(f"// Test image label: {label}\n")
        f.write(f"int test_label = {label};\n\n")
        f.write("float test_image[28][28] = {\n")
        for i in range(28):
            f.write("  {")
            f.write(", ".join([f"{img_np[i][j]:.6f}f" for j in range(28)]))
            f.write("}")
            if i < 27: f.write(",")
            f.write("\n")
        f.write("};\n\n#endif\n")
    
    print(f"✅ Exported test image (label: {label}): weights/test_image.h")

# ============================================
# MAIN EXECUTION
# ============================================
if __name__ == "__main__":
    print("\n🚀 PERSON A - CNN TRAINING PIPELINE\n")
    
    # Train
    model = train_model()
    
    # Export weights
    export_weights(model)
    
    # Export test image
    export_test_image()
    
    print("\n" + "=" * 50)
    print("✅ ALL TASKS COMPLETE")
    print("=" * 50)
    print("\nNext steps:")
    print("1. Copy the 'weights' folder to your Visual Studio project")
    print("2. Use the C++ inference code to test")
    print("\n📦 Files created:")
    print("  - weights/conv1_weights.h")
    print("  - weights/conv2_weights.h")
    print("  - weights/fc_weights.h")
    print("  - weights/test_image.h")