; ModuleID = 'C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/hls_component/hls/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: noinline
define void @apatb_conv2d_ir(float* noalias nocapture nonnull readonly "maxi" %input, float* noalias nocapture nonnull readonly "maxi" %weights, float* noalias nocapture nonnull readonly "maxi" %bias, float* noalias nocapture nonnull "maxi" %output) local_unnamed_addr #0 {
entry:
  %0 = bitcast float* %input to [784 x float]*
  %input_copy = alloca [784 x float], align 512
  %1 = bitcast float* %weights to [5224 x float]*
  %2 = call i8* @malloc(i64 20896)
  %weights_copy = bitcast i8* %2 to [5224 x float]*
  %3 = bitcast float* %bias to [34 x float]*
  %bias_copy = alloca [34 x float], align 512
  %4 = bitcast float* %output to [10 x float]*
  %output_copy = alloca [10 x float], align 512
  call fastcc void @copy_in([784 x float]* nonnull %0, [784 x float]* nonnull align 512 %input_copy, [5224 x float]* nonnull %1, [5224 x float]* %weights_copy, [34 x float]* nonnull %3, [34 x float]* nonnull align 512 %bias_copy, [10 x float]* nonnull %4, [10 x float]* nonnull align 512 %output_copy)
  call void @apatb_conv2d_hw([784 x float]* %input_copy, [5224 x float]* %weights_copy, [34 x float]* %bias_copy, [10 x float]* %output_copy)
  call void @copy_back([784 x float]* %0, [784 x float]* %input_copy, [5224 x float]* %1, [5224 x float]* %weights_copy, [34 x float]* %3, [34 x float]* %bias_copy, [10 x float]* %4, [10 x float]* %output_copy)
  tail call void @free(i8* %2)
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_in([784 x float]* readonly, [784 x float]* align 512, [5224 x float]* readonly, [5224 x float]*, [34 x float]* readonly, [34 x float]* align 512, [10 x float]* readonly, [10 x float]* align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a784f32([784 x float]* align 512 %1, [784 x float]* %0)
  call fastcc void @onebyonecpy_hls.p0a5224f32([5224 x float]* %3, [5224 x float]* %2)
  call fastcc void @onebyonecpy_hls.p0a34f32([34 x float]* align 512 %5, [34 x float]* %4)
  call fastcc void @onebyonecpy_hls.p0a10f32([10 x float]* align 512 %7, [10 x float]* %6)
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a784f32([784 x float]* align 512 %dst, [784 x float]* readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [784 x float]* %dst, null
  %1 = icmp eq [784 x float]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a784f32([784 x float]* nonnull %dst, [784 x float]* nonnull %src, i64 784)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a784f32([784 x float]* %dst, [784 x float]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [784 x float]* %src, null
  %1 = icmp eq [784 x float]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [784 x float], [784 x float]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [784 x float], [784 x float]* %src, i64 0, i64 %for.loop.idx2
  %3 = load float, float* %src.addr, align 4
  store float %3, float* %dst.addr, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a5224f32([5224 x float]* %dst, [5224 x float]* readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [5224 x float]* %dst, null
  %1 = icmp eq [5224 x float]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a5224f32([5224 x float]* nonnull %dst, [5224 x float]* nonnull %src, i64 5224)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a5224f32([5224 x float]* %dst, [5224 x float]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [5224 x float]* %src, null
  %1 = icmp eq [5224 x float]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [5224 x float], [5224 x float]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [5224 x float], [5224 x float]* %src, i64 0, i64 %for.loop.idx2
  %3 = load float, float* %src.addr, align 4
  store float %3, float* %dst.addr, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a34f32([34 x float]* align 512 %dst, [34 x float]* readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [34 x float]* %dst, null
  %1 = icmp eq [34 x float]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a34f32([34 x float]* nonnull %dst, [34 x float]* nonnull %src, i64 34)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a34f32([34 x float]* %dst, [34 x float]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [34 x float]* %src, null
  %1 = icmp eq [34 x float]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [34 x float], [34 x float]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [34 x float], [34 x float]* %src, i64 0, i64 %for.loop.idx2
  %3 = load float, float* %src.addr, align 4
  store float %3, float* %dst.addr, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @onebyonecpy_hls.p0a10f32([10 x float]* align 512 %dst, [10 x float]* readonly %src) unnamed_addr #2 {
entry:
  %0 = icmp eq [10 x float]* %dst, null
  %1 = icmp eq [10 x float]* %src, null
  %2 = or i1 %0, %1
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  call void @arraycpy_hls.p0a10f32([10 x float]* nonnull %dst, [10 x float]* nonnull %src, i64 10)
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define void @arraycpy_hls.p0a10f32([10 x float]* %dst, [10 x float]* readonly %src, i64 %num) local_unnamed_addr #3 {
entry:
  %0 = icmp eq [10 x float]* %src, null
  %1 = icmp eq [10 x float]* %dst, null
  %2 = or i1 %1, %0
  br i1 %2, label %ret, label %copy

copy:                                             ; preds = %entry
  %for.loop.cond1 = icmp sgt i64 %num, 0
  br i1 %for.loop.cond1, label %for.loop.lr.ph, label %copy.split

for.loop.lr.ph:                                   ; preds = %copy
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %for.loop.lr.ph
  %for.loop.idx2 = phi i64 [ 0, %for.loop.lr.ph ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [10 x float], [10 x float]* %dst, i64 0, i64 %for.loop.idx2
  %src.addr = getelementptr [10 x float], [10 x float]* %src, i64 0, i64 %for.loop.idx2
  %3 = load float, float* %src.addr, align 4
  store float %3, float* %dst.addr, align 4
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx2, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, %num
  br i1 %exitcond, label %for.loop, label %copy.split

copy.split:                                       ; preds = %for.loop, %copy
  br label %ret

ret:                                              ; preds = %copy.split, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_out([784 x float]*, [784 x float]* readonly align 512, [5224 x float]*, [5224 x float]* readonly, [34 x float]*, [34 x float]* readonly align 512, [10 x float]*, [10 x float]* readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a784f32([784 x float]* %0, [784 x float]* align 512 %1)
  call fastcc void @onebyonecpy_hls.p0a5224f32([5224 x float]* %2, [5224 x float]* %3)
  call fastcc void @onebyonecpy_hls.p0a34f32([34 x float]* %4, [34 x float]* align 512 %5)
  call fastcc void @onebyonecpy_hls.p0a10f32([10 x float]* %6, [10 x float]* align 512 %7)
  ret void
}

declare i8* @malloc(i64) local_unnamed_addr

declare void @free(i8*) local_unnamed_addr

declare void @apatb_conv2d_hw([784 x float]*, [5224 x float]*, [34 x float]*, [10 x float]*)

; Function Attrs: argmemonly noinline norecurse willreturn
define internal fastcc void @copy_back([784 x float]*, [784 x float]* readonly align 512, [5224 x float]*, [5224 x float]* readonly, [34 x float]*, [34 x float]* readonly align 512, [10 x float]*, [10 x float]* readonly align 512) unnamed_addr #4 {
entry:
  call fastcc void @onebyonecpy_hls.p0a10f32([10 x float]* %6, [10 x float]* align 512 %7)
  ret void
}

declare void @conv2d_hw_stub(float* noalias nocapture nonnull readonly, float* noalias nocapture nonnull readonly, float* noalias nocapture nonnull readonly, float* noalias nocapture nonnull)

define void @conv2d_hw_stub_wrapper([784 x float]*, [5224 x float]*, [34 x float]*, [10 x float]*) #5 {
entry:
  call void @copy_out([784 x float]* null, [784 x float]* %0, [5224 x float]* null, [5224 x float]* %1, [34 x float]* null, [34 x float]* %2, [10 x float]* null, [10 x float]* %3)
  %4 = bitcast [784 x float]* %0 to float*
  %5 = bitcast [5224 x float]* %1 to float*
  %6 = bitcast [34 x float]* %2 to float*
  %7 = bitcast [10 x float]* %3 to float*
  call void @conv2d_hw_stub(float* %4, float* %5, float* %6, float* %7)
  call void @copy_in([784 x float]* null, [784 x float]* %0, [5224 x float]* null, [5224 x float]* %1, [34 x float]* null, [34 x float]* %2, [10 x float]* null, [10 x float]* %3)
  ret void
}

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="arraycpy_hls" }
attributes #4 = { argmemonly noinline norecurse willreturn "fpga.wrapper.func"="copyout" }
attributes #5 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1, !1}
!llvm.module.flags = !{!2, !3, !4}
!blackbox_cfg = !{!5}

!0 = !{!"AMD/Xilinx clang version 16.0.6"}
!1 = !{!"clang version 7.0.0 "}
!2 = !{i32 2, !"Dwarf Version", i32 4}
!3 = !{i32 2, !"Debug Info Version", i32 3}
!4 = !{i32 1, !"wchar_size", i32 4}
!5 = !{}
