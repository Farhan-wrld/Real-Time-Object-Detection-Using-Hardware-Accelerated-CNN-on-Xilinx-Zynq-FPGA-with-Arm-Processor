// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2025.2 (64-bit)
// Tool Version Limit: 2025.11
// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// 
// ==============================================================
# 1 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 432 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 1 3








# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt_stdio_config.h" 1 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt_stdio_config.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 1 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 1 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_mac.h" 1 3
# 11 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_secapi.h" 1 3
# 44 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include/_mingw_secapi.h" 3
extern "C++" {
template <bool __test, typename __dsttype>
  struct __if_array;
template <typename __dsttype>
  struct __if_array <true, __dsttype> {
    typedef __dsttype __type;
};
}
# 12 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 289 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:\\AMDDesignTools\\2025.2\\Vitis\\win64\\tools\\clang-16\\lib\\clang\\16\\include\\vadefs.h" 1 3
# 12 "C:\\AMDDesignTools\\2025.2\\Vitis\\win64\\tools\\clang-16\\lib\\clang\\16\\include\\vadefs.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 1 3








# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 1 3
# 623 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include/sdks/_mingw_ddk.h" 1 3
# 624 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 2 3




#pragma pack(push,_CRT_PACKING)



extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\vadefs.h" 3
}



#pragma pack(pop)
# 13 "C:\\AMDDesignTools\\2025.2\\Vitis\\win64\\tools\\clang-16\\lib\\clang\\16\\include\\vadefs.h" 2 3
# 290 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 2 3
# 575 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
extern "C" {
# 586 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw.h" 3
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{

  __asm__ __volatile__("int {$}3":);







}




const char *__mingw_get_crt_info (void);


}
# 11 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 2 3




#pragma pack(push,_CRT_PACKING)
# 35 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
__extension__ typedef unsigned long long size_t;
# 45 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
__extension__ typedef long long ssize_t;






typedef size_t rsize_t;
# 62 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
__extension__ typedef long long intptr_t;
# 75 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 88 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
__extension__ typedef long long ptrdiff_t;
# 106 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 138 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
typedef __time64_t time_t;
# 430 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {





  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;

} threadlocinfo;
# 501 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt.h" 3
#pragma pack(pop)
# 11 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\corecrt_stdio_config.h" 2 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)
# 23 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
extern "C" {
# 33 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  struct _iobuf {



    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;

  };
  typedef struct _iobuf FILE;
# 91 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_off_t.h" 1 3




  typedef long _off_t;

  typedef long off32_t;





  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 26 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\_mingw_off_t.h" 3
typedef off32_t off_t;
# 92 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3

__attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __acrt_iob_func(unsigned index);


  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) __iob_func(void);
# 115 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 156 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __attribute__((__cdecl__)) __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);

extern
  __attribute__((__format__ (ms_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
# 285 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
extern "C++" {


inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sscanf(const char *__source, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int scanf(const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( (__acrt_iob_func(0)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fscanf(FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"


inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsscanf (const char *__source, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsscanf( __source, __format, __local_argv );
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vscanf(const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( (__acrt_iob_func(0)), __format, __local_argv );
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_scanf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfscanf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( __stream, __format, __local_argv );
}


#pragma GCC diagnostic pop





inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int fprintf (FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
int printf (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( (__acrt_iob_func(1)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}
# 394 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
int sprintf (char *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vfprintf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( __stream, __format, __local_argv );
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
int vprintf (const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( (__acrt_iob_func(1)), __format, __local_argv );
}

inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
int vsprintf (char *__stream, const char *__format, __builtin_va_list __local_argv)
{
# 433 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  return __mingw_vsprintf( __stream, __format, __local_argv );
}
# 449 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



inline __attribute__((__cdecl__))
__attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
int vsnprintf (char *__stream, size_t __n, const char *__format, __builtin_va_list __local_argv)
{



  return __mingw_vsnprintf( __stream, __n, __format, __local_argv );
}
# 479 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
}
# 603 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __attribute__((__cdecl__)) clearerr(FILE *_File);
  int __attribute__((__cdecl__)) fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _fdopen(int _FileHandle,const char *_Mode);

  int __attribute__((__cdecl__)) feof(FILE *_File);
  int __attribute__((__cdecl__)) ferror(FILE *_File);
  int __attribute__((__cdecl__)) fflush(FILE *_File);
  int __attribute__((__cdecl__)) fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fgetchar(void);
  int __attribute__((__cdecl__)) fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  int __attribute__((__cdecl__)) fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__attribute__((__cdecl__)) fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__attribute__((__cdecl__)) _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _flushall(void);
  FILE *__attribute__((__cdecl__)) fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __attribute__((__cdecl__)) fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fputchar(int _Ch);
  int __attribute__((__cdecl__)) fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __attribute__((__cdecl__)) fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__attribute__((__cdecl__)) freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __attribute__((__cdecl__)) fsetpos(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fsetpos64(FILE *_File,const fpos_t *_Pos);
  int __attribute__((__cdecl__)) fseek(FILE *_File,long _Offset,int _Origin);
  long __attribute__((__cdecl__)) ftell(FILE *_File);



  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long long __attribute__((__cdecl__)) _ftelli64(FILE *_File);
# 662 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);

  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
# 683 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  size_t __attribute__((__cdecl__)) fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) getc(FILE *_File);
  int __attribute__((__cdecl__)) getchar(void);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _getmaxstdio(void);
  char *__attribute__((__cdecl__)) gets(char *_Buffer) ;
  int __attribute__((__cdecl__)) _getw(FILE *_File);


  void __attribute__((__cdecl__)) perror(const char *_ErrMsg);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _popen(const char *_Command,const char *_Mode);





  int __attribute__((__cdecl__)) putc(int _Ch,FILE *_File);
  int __attribute__((__cdecl__)) putchar(int _Ch);
  int __attribute__((__cdecl__)) puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putw(int _Word,FILE *_File);


  int __attribute__((__cdecl__)) remove(const char *_Filename);
  int __attribute__((__cdecl__)) rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _unlink(const char *_Filename);

  int __attribute__((__cdecl__)) unlink(const char *_Filename) ;


  void __attribute__((__cdecl__)) rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _rmtmp(void);
  void __attribute__((__cdecl__)) setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __attribute__((__cdecl__)) _get_output_format(void);
  int __attribute__((__cdecl__)) setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
# 746 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__pure__))
  __attribute__((__format__ (ms_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_scanf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;

  __attribute__ ((__pure__))
  __attribute__((__format__ (ms_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  FILE *__attribute__((__cdecl__)) tmpfile(void) ;
  char *__attribute__((__cdecl__)) tmpnam(char *_Buffer);
  int __attribute__((__cdecl__)) ungetc(int _Ch,FILE *_File);
# 774 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__((__format__ (ms_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__((__format__ (ms_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
# 940 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _get_printf_count_output(void);




                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                      __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
                                                      __attribute__ ((__nonnull__ (3)))
  int __attribute__((__cdecl__)) __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                      __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wscanf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
                                                     __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_wprintf(const wchar_t * __restrict__ _Format,...);
                                                    __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                    __attribute__ ((__nonnull__ (1)))
  int __attribute__((__cdecl__)) __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
                                                     __attribute__ ((__nonnull__ (2)))
  int __attribute__((__cdecl__)) __ms_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);
# 1008 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int swscanf(const wchar_t *__source, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vswscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int wscanf(const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( (__acrt_iob_func(0)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int fwscanf(FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}


inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
{
  return __mingw_vswscanf( __source, __format, __local_argv );
}

inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (1)))
int vwscanf(const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( (__acrt_iob_func(0)), __format, __local_argv );
}

inline __attribute__((__cdecl__))
                                                     __attribute__ ((__nonnull__ (2)))
int vfwscanf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( __stream, __format, __local_argv );
}




inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int fwprintf (FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int wprintf (const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( (__acrt_iob_func(1)), __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int vfwprintf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( __stream, __format, __local_argv );
}

inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (1)))
int vwprintf (const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( (__acrt_iob_func(1)), __format, __local_argv );
}
# 1116 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



inline __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vsnwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, __builtin_va_list __local_argv)
{



  return __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
}
# 1269 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __attribute__((__cdecl__)) fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fgetwchar(void);
  wint_t __attribute__((__cdecl__)) fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __attribute__((__cdecl__)) _fputwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) getwc(FILE *_File);
  wint_t __attribute__((__cdecl__)) getwchar(void);
  wint_t __attribute__((__cdecl__)) putwc(wchar_t _Ch,FILE *_File);
  wint_t __attribute__((__cdecl__)) putwchar(wchar_t _Ch);
  wint_t __attribute__((__cdecl__)) ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__attribute__((__cdecl__)) fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __attribute__((__cdecl__)) fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _putws(const wchar_t *_Str);
# 1351 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
# 1381 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);



# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 1 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 3
# 1 "C:\\AMDDesignTools\\2025.2\\Vitis\\win64\\tools\\clang-16\\lib\\clang\\16\\include\\vadefs.h" 1 3
# 11 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 2 3
# 25 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\swprintf.inl" 3
static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (3)))
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}



extern "C++" {

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int vswprintf (wchar_t *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{

  return __mingw_vswprintf( __stream, __format, __local_argv );



}

static __attribute__ ((__unused__)) __inline__ __attribute__((__cdecl__))
                                                      __attribute__ ((__nonnull__ (2)))
int swprintf (wchar_t *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

}
# 1387 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3
# 1396 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__attribute__((__cdecl__)) _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _wtmpnam(wchar_t *_Buffer);
# 1456 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __attribute__((__cdecl__)) _unlock_file(FILE *_File);
# 1474 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  char *__attribute__((__cdecl__)) tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __attribute__((__cdecl__)) fcloseall(void) ;
  FILE *__attribute__((__cdecl__)) fdopen(int _FileHandle,const char *_Format) ;
  int __attribute__((__cdecl__)) fgetchar(void) ;
  int __attribute__((__cdecl__)) fileno(FILE *_File) ;
  int __attribute__((__cdecl__)) flushall(void) ;
  int __attribute__((__cdecl__)) fputchar(int _Ch) ;
  int __attribute__((__cdecl__)) getw(FILE *_File) ;
  int __attribute__((__cdecl__)) putw(int _Ch,FILE *_File) ;
  int __attribute__((__cdecl__)) rmtmp(void) ;
# 1500 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);
# 1514 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
int __attribute__((__cdecl__)) __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);
# 1523 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
void __attribute__((__cdecl__)) __mingw_str_free(void *ptr);






  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
# 1554 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 3
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t __attribute__((__cdecl__)) _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);




}







#pragma pack(pop)

# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 1 3








# 1 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 1 3
# 10 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 2 3
# 21 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
extern "C" {







  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) clearerr_s(FILE *_File);

  size_t __attribute__((__cdecl__)) fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
# 494 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fprintf_s(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fscanf_s(FILE *_File, const char *_Format, ...);
  int __attribute__((__cdecl__)) printf_s(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) scanf_s(const char *_Format, ...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) sscanf_s(const char *_Src,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __attribute__((__cdecl__)) vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vprintf_s(const char *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);

  __attribute__((dllimport)) int __attribute__((__cdecl__)) sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p(FILE *_File,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p(const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p(const char *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscprintf_p(const char *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _printf_s_l(const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);


  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vsnprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, va_list _ArgList) { return vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _vsnprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, va_list _ArgList) { return _vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vsprintf_s(char (&_DstBuf)[__size], const char* _Format, va_list _ArgList) { return vsprintf_s(_DstBuf,__size,_Format,_ArgList); } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) sprintf_s(char (&_DstBuf)[__size], const char* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = vsprintf_s(_DstBuf,__size,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _snprintf_s(char (&_DstBuf)[__size], size_t _MaxCount, const char* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = _vsnprintf_s(_DstBuf,__size,_MaxCount,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  __attribute__ ((__dllimport__)) char* __attribute__((__cdecl__)) gets_s(char*,rsize_t);
  extern "C++" { template <size_t __size> inline char* __attribute__((__cdecl__)) get_s(char (&_DstBuf)[__size]) { return get_s(_DstBuf,__size); } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) tmpnam_s(char*,rsize_t);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) tmpnam_s(char (&_DstBuf)[__size]) { return tmpnam_s(_DstBuf,__size); } }




  __attribute__ ((__dllimport__)) wchar_t *__attribute__((__cdecl__)) _getws_s(wchar_t *_Str,size_t _SizeInWords);
  extern "C++" { template <size_t __size> inline wchar_t* __attribute__((__cdecl__)) _getws_s(wchar_t (&_DstBuf)[__size]) { return _getws_s(_DstBuf,__size); } }
# 786 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
  int __attribute__((__cdecl__)) fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) wprintf_s(const wchar_t *_Format,...);
  int __attribute__((__cdecl__)) vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __attribute__((__cdecl__)) vwprintf_s(const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);

  int __attribute__((__cdecl__)) swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) fwscanf_s(FILE *_File, const wchar_t *_Format, ...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) wscanf_s(const wchar_t *_Format, ...);


  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) vswprintf_s(wchar_t (&_Dst)[__size], const wchar_t* _Format, va_list _ArgList) { return vswprintf_s(_Dst,__size,_Format,_ArgList); } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) swprintf_s(wchar_t (&_Dst)[__size], const wchar_t* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = vswprintf_s(_Dst,__size,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _vsnwprintf_s(wchar_t (&_DstBuf)[__size], size_t _MaxCount, const wchar_t* _Format, va_list _ArgList) { return _vsnwprintf_s(_DstBuf,__size,_MaxCount,_Format,_ArgList); } }
  extern "C++" { template <size_t __size> inline int __attribute__((__cdecl__)) _snwprintf_s(wchar_t (&_DstBuf)[__size], size_t _MaxCount, const wchar_t* _Format, ...) { va_list __vaargs; __builtin_va_start(__vaargs,_Format); int __retval = _vsnwprintf_s(_DstBuf,__size,_MaxCount,_Format,__vaargs); __builtin_va_end(__vaargs); return __retval; } }

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  __attribute__ ((__dllimport__)) errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
  extern "C++" { template <size_t __size> inline errno_t __attribute__((__cdecl__)) _wtmpnam_s(wchar_t (&_DstBuf)[__size]) { return _wtmpnam_s(_DstBuf,__size); } }


  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p(FILE *_File,const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p(const wchar_t *_Format,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p(const wchar_t *_Format,...);
  __attribute__((dllimport)) int __attribute__((__cdecl__)) _vscwprintf_p(const wchar_t *_Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vfwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _scwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __swprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) __vswprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,va_list _Args);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _vscwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _fwscanf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _swscanf_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _snwscanf_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __attribute__((__cdecl__)) _wscanf_l(const wchar_t *_Format,_locale_t _Locale,...);
# 872 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\sec_api/stdio_s.h" 3
}
# 1573 "C:/AMDDesignTools/2025.2/Vitis/tps/mingw/10.0.0/win64.o/nt\\x86_64-w64-mingw32\\include\\stdio.h" 2 3
# 2 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2


#ifndef HLS_FASTSIM
#ifdef __cplusplus
extern "C"
#endif
void apatb_conv2d_sw(float *, float *, float *, float *);
#endif
# 3 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"
void conv2d(float*, float*, float*, float*);

# 1 "C:/Users/Admin/Downloads/conv1_weights.h" 1




float conv1_w[8][1][3][3] = {
  {
    {{-0.463155f, -0.294505f, -0.278778f},{-0.469590f, -0.168276f, -0.538378f},{0.071362f, -0.474321f, -0.486497f}}
  },
  {
    {{0.057272f, 0.467175f, 0.093637f},{0.158795f, 0.477491f, 0.453977f},{-0.668576f, -0.433983f, -0.403498f}}
  },
  {
    {{-0.280258f, -0.537585f, -0.053282f},{-0.546139f, -0.060947f, 0.541080f},{-0.361028f, 0.129835f, 0.349346f}}
  },
  {
    {{0.116753f, 0.289596f, 0.466027f},{0.366084f, 0.520457f, -0.199743f},{0.305841f, -0.466381f, -0.623629f}}
  },
  {
    {{-0.287689f, -0.096067f, 0.443186f},{0.055633f, 0.183087f, 0.513359f},{0.536990f, 0.213702f, -0.172516f}}
  },
  {
    {{0.401852f, 0.352246f, -0.155220f},{-0.060445f, 0.276146f, 0.258483f},{-0.403362f, 0.193659f, 0.359738f}}
  },
  {
    {{0.329637f, 0.431995f, 0.184112f},{-0.088195f, 0.211551f, 0.239339f},{-0.148221f, 0.349428f, 0.419246f}}
  },
  {
    {{0.027130f, 0.354981f, 0.408715f},{-0.485438f, -0.178081f, 0.521170f},{-0.640009f, -0.153534f, 0.418021f}}
  }
};

float conv1_b[8] = {0.455118f, 0.272688f, -0.189221f, 0.381349f, 0.235155f, -0.108070f, 0.268326f, 0.115609f};
# 6 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2
# 1 "C:/Users/Admin/Downloads/conv2_weights.h" 1




float conv2_w[16][8][3][3] = {
  {
    {{-0.111930f, -0.190831f, -0.160766f},{-0.242985f, -0.026765f, -0.223605f},{0.043338f, -0.099002f, -0.164270f}},
    {{-0.064106f, -0.054897f, 0.015126f},{0.164492f, 0.033627f, -0.068069f},{0.032032f, -0.197656f, 0.007227f}},
    {{0.091860f, -0.162779f, -0.136355f},{-0.222806f, -0.093121f, -0.093726f},{0.087741f, -0.083042f, 0.123030f}},
    {{-0.109881f, -0.075668f, -0.096953f},{0.153526f, -0.146725f, -0.141692f},{0.094876f, -0.351933f, -0.066454f}},
    {{0.089595f, 0.166618f, 0.113100f},{0.084548f, 0.054110f, -0.132936f},{-0.284611f, 0.061843f, -0.086517f}},
    {{-0.086522f, 0.025367f, 0.226238f},{-0.047526f, 0.120222f, 0.051367f},{-0.097180f, -0.079802f, 0.169888f}},
    {{0.063008f, 0.025030f, 0.069821f},{-0.111532f, -0.012737f, 0.196391f},{-0.234391f, -0.083475f, 0.086219f}},
    {{-0.046151f, 0.087467f, 0.288001f},{-0.188726f, 0.088064f, 0.248847f},{-0.058858f, 0.153328f, 0.077671f}}
  },
  {
    {{0.058647f, -0.039407f, -0.298208f},{-0.091115f, 0.021523f, -0.420890f},{-0.199175f, -0.242114f, -0.303185f}},
    {{0.000366f, -0.095260f, 0.059239f},{0.062339f, -0.147590f, 0.030620f},{0.130199f, 0.035820f, 0.007073f}},
    {{-0.135584f, -0.196784f, 0.030096f},{-0.195596f, -0.114553f, 0.297333f},{0.024652f, 0.108380f, 0.108337f}},
    {{-0.124550f, -0.003241f, -0.009942f},{0.073681f, -0.237944f, -0.050767f},{0.096666f, 0.127024f, 0.194217f}},
    {{-0.025888f, -0.068437f, -0.012287f},{-0.058414f, -0.046558f, 0.076443f},{0.138980f, 0.156657f, 0.121475f}},
    {{-0.016037f, -0.023214f, 0.071275f},{-0.152666f, -0.039104f, 0.109122f},{-0.017228f, -0.148059f, -0.092713f}},
    {{-0.029393f, -0.149293f, 0.157999f},{-0.077522f, -0.073593f, 0.075898f},{-0.028613f, 0.057211f, -0.171653f}},
    {{-0.069041f, 0.040436f, 0.126353f},{-0.039216f, 0.058183f, 0.191353f},{-0.041738f, -0.186423f, -0.179679f}}
  },
  {
    {{-0.041738f, -0.053192f, 0.209192f},{0.153778f, 0.008894f, 0.018747f},{-0.047024f, -0.069792f, -0.251809f}},
    {{-0.039025f, 0.161786f, -0.092219f},{-0.310552f, 0.031028f, 0.133376f},{0.117919f, 0.221973f, 0.261327f}},
    {{-0.109195f, -0.179248f, -0.199968f},{0.201456f, 0.046282f, -0.047068f},{0.283243f, 0.028690f, 0.024329f}},
    {{-0.067352f, 0.152537f, -0.134211f},{-0.169404f, -0.078009f, -0.223798f},{0.249356f, 0.267231f, -0.034823f}},
    {{-0.028840f, -0.201220f, -0.244367f},{-0.091607f, 0.161595f, -0.050205f},{0.112864f, 0.182362f, 0.166738f}},
    {{-0.131060f, -0.198145f, -0.106669f},{-0.179798f, -0.077075f, 0.063250f},{-0.134239f, -0.029174f, 0.170151f}},
    {{-0.086321f, -0.127546f, -0.062558f},{-0.210239f, 0.011643f, -0.028980f},{0.001386f, -0.024233f, 0.121012f}},
    {{-0.089156f, -0.218501f, -0.244044f},{-0.124336f, -0.093705f, -0.072236f},{-0.111129f, 0.116214f, 0.207905f}}
  },
  {
    {{0.108745f, 0.031246f, 0.098180f},{0.031791f, -0.031378f, -0.077525f},{0.118952f, -0.195637f, -0.022088f}},
    {{-0.124061f, -0.407250f, -0.182468f},{-0.267640f, -0.171126f, -0.038866f},{-0.223879f, -0.094719f, 0.020336f}},
    {{-0.119953f, 0.121811f, 0.110945f},{0.139669f, 0.234001f, -0.003148f},{0.446419f, 0.245796f, -0.209135f}},
    {{-0.017351f, -0.238773f, -0.019354f},{-0.225662f, -0.013652f, 0.131312f},{-0.318651f, -0.139621f, 0.140951f}},
    {{-0.156367f, -0.142028f, -0.011455f},{-0.123956f, 0.055222f, 0.128087f},{-0.152343f, 0.189672f, 0.071078f}},
    {{-0.062758f, -0.190502f, -0.037668f},{-0.198546f, 0.009915f, -0.166032f},{-0.035342f, -0.003389f, -0.055932f}},
    {{-0.102319f, -0.214782f, 0.071341f},{-0.157250f, 0.134440f, -0.008840f},{0.010612f, 0.159375f, 0.006089f}},
    {{-0.266686f, -0.230331f, 0.000795f},{0.018628f, 0.092452f, -0.055839f},{0.284147f, 0.018105f, -0.291029f}}
  },
  {
    {{0.073609f, -0.073959f, -0.010407f},{-0.042556f, -0.142106f, 0.018051f},{-0.364767f, 0.019717f, 0.012527f}},
    {{0.006251f, -0.006514f, -0.112765f},{-0.144274f, -0.188419f, -0.160706f},{0.034429f, -0.127626f, 0.066042f}},
    {{-0.257611f, 0.016231f, -0.277946f},{-0.024405f, -0.070327f, -0.273910f},{0.133083f, -0.054654f, -0.241974f}},
    {{-0.323871f, -0.113782f, -0.066779f},{-0.127162f, 0.119561f, -0.018942f},{0.322996f, 0.003961f, -0.054235f}},
    {{-0.069443f, -0.038605f, 0.028826f},{0.128039f, 0.075928f, -0.212649f},{0.277547f, 0.084509f, -0.252657f}},
    {{0.185182f, 0.058951f, -0.045899f},{0.133388f, 0.012316f, -0.003629f},{-0.075526f, -0.128431f, 0.020162f}},
    {{-0.032199f, 0.086552f, -0.038081f},{0.154892f, 0.130920f, -0.011214f},{-0.082512f, -0.095168f, -0.134285f}},
    {{0.210380f, 0.289979f, -0.141451f},{0.119688f, 0.138494f, -0.140458f},{-0.233423f, -0.294602f, -0.067394f}}
  },
  {
    {{0.042947f, 0.095723f, -0.162242f},{0.104247f, 0.001740f, -0.125351f},{0.125618f, -0.053768f, -0.164892f}},
    {{-0.018660f, -0.061189f, -0.015956f},{-0.242548f, 0.005647f, -0.107772f},{-0.205379f, 0.024255f, -0.046530f}},
    {{-0.158432f, 0.288370f, 0.239729f},{0.034051f, 0.234008f, 0.008483f},{0.039268f, 0.168335f, -0.063742f}},
    {{0.010245f, -0.196366f, 0.004355f},{-0.114825f, -0.350540f, -0.021955f},{-0.102265f, -0.178567f, -0.075292f}},
    {{0.011084f, 0.010537f, 0.066287f},{-0.237264f, 0.175731f, 0.037038f},{-0.221670f, 0.081140f, -0.083446f}},
    {{-0.168170f, -0.004051f, 0.098675f},{-0.177510f, 0.171896f, 0.166510f},{-0.238218f, 0.041166f, 0.018290f}},
    {{-0.045337f, 0.195175f, 0.118622f},{-0.139832f, 0.077800f, 0.027567f},{-0.227568f, 0.147976f, 0.044542f}},
    {{-0.111229f, 0.099301f, 0.009555f},{-0.150820f, 0.217649f, 0.044592f},{-0.020103f, 0.238525f, 0.265357f}}
  },
  {
    {{0.021113f, -0.273941f, -0.239751f},{-0.050125f, -0.205414f, -0.087635f},{-0.009070f, -0.134520f, -0.059595f}},
    {{0.036718f, -0.126221f, -0.123529f},{-0.016222f, -0.156334f, -0.260313f},{-0.248219f, -0.022819f, -0.139224f}},
    {{-0.316908f, -0.148202f, -0.299586f},{-0.161751f, 0.041880f, -0.169988f},{0.215775f, 0.172816f, -0.535361f}},
    {{0.002412f, -0.077094f, 0.163890f},{0.034029f, 0.009055f, 0.162324f},{0.004902f, -0.078977f, 0.096007f}},
    {{-0.015635f, 0.128708f, -0.047341f},{0.065321f, 0.144865f, 0.059998f},{-0.008673f, 0.123927f, -0.079672f}},
    {{0.109474f, 0.115039f, 0.163794f},{0.095967f, 0.089534f, -0.106141f},{0.003198f, 0.035747f, -0.110979f}},
    {{0.124592f, 0.125172f, 0.100378f},{-0.108230f, 0.175455f, -0.094239f},{-0.032126f, 0.135751f, -0.104300f}},
    {{-0.054630f, 0.040866f, -0.021280f},{0.010307f, -0.021501f, -0.161666f},{0.024604f, 0.070304f, -0.359593f}}
  },
  {
    {{-0.006229f, -0.176050f, -0.091826f},{-0.140925f, -0.170822f, -0.050889f},{-0.078801f, -0.314456f, -0.165994f}},
    {{-0.111751f, -0.328944f, -0.065527f},{-0.294302f, 0.007966f, 0.072035f},{-0.165221f, -0.008356f, 0.018558f}},
    {{-0.064310f, 0.086147f, 0.225294f},{0.000014f, 0.118273f, -0.138294f},{-0.107321f, -0.071964f, -0.204407f}},
    {{-0.112833f, -0.129958f, 0.035983f},{-0.007940f, 0.197066f, 0.158903f},{0.132695f, 0.244732f, 0.099280f}},
    {{-0.231051f, 0.029002f, 0.118548f},{0.015945f, 0.136192f, 0.154568f},{0.233199f, 0.191150f, -0.018509f}},
    {{-0.073617f, -0.015634f, -0.090245f},{0.003987f, 0.113469f, -0.009493f},{-0.017807f, -0.037202f, -0.148534f}},
    {{-0.013385f, -0.040816f, -0.037254f},{-0.014463f, 0.110462f, -0.006692f},{0.056793f, -0.073484f, -0.183795f}},
    {{-0.010568f, 0.069977f, -0.061039f},{-0.008507f, -0.146733f, -0.025461f},{-0.246399f, -0.250445f, -0.083787f}}
  },
  {
    {{-0.171509f, -0.062165f, -0.034004f},{-0.156722f, -0.142402f, -0.254290f},{-0.253476f, -0.392870f, -0.097192f}},
    {{0.121666f, 0.001292f, -0.108120f},{0.124116f, 0.048394f, -0.030735f},{-0.062024f, 0.067022f, -0.085565f}},
    {{0.034702f, -0.011771f, 0.142273f},{-0.283795f, 0.212627f, 0.143252f},{0.052439f, 0.216090f, 0.196066f}},
    {{0.403441f, 0.043533f, -0.205120f},{-0.005910f, -0.090381f, 0.222073f},{0.108631f, 0.282119f, 0.103098f}},
    {{0.030072f, -0.239696f, -0.075464f},{-0.174655f, 0.064734f, 0.183356f},{0.090560f, 0.141062f, -0.186885f}},
    {{-0.181180f, -0.030617f, 0.042154f},{0.138674f, -0.125174f, -0.005381f},{0.124046f, 0.028202f, -0.096911f}},
    {{-0.123920f, -0.101240f, 0.050296f},{0.007807f, -0.120114f, -0.028468f},{-0.007634f, 0.010791f, -0.224634f}},
    {{-0.112385f, 0.089212f, 0.145776f},{-0.106404f, 0.100016f, -0.061725f},{0.164759f, 0.106668f, -0.198606f}}
  },
  {
    {{-0.038810f, -0.131159f, -0.105504f},{-0.161369f, -0.136168f, -0.065995f},{-0.121373f, 0.124453f, 0.095878f}},
    {{-0.110329f, -0.126627f, 0.135250f},{0.137819f, 0.207979f, 0.120724f},{0.178552f, 0.214427f, 0.099634f}},
    {{0.003734f, 0.227680f, 0.188392f},{0.238656f, 0.267778f, -0.033755f},{-0.284011f, -0.064626f, 0.125450f}},
    {{-0.156231f, -0.120933f, 0.072899f},{0.039418f, 0.249158f, 0.125688f},{0.169066f, -0.046210f, 0.010448f}},
    {{-0.121539f, 0.138824f, 0.243251f},{0.152172f, 0.034330f, 0.037962f},{0.059075f, -0.226319f, 0.106600f}},
    {{-0.125275f, 0.069833f, -0.075569f},{-0.081052f, -0.138541f, -0.011950f},{0.016999f, -0.133640f, -0.112365f}},
    {{-0.100596f, -0.083319f, 0.031711f},{0.044501f, 0.049556f, 0.032118f},{-0.048903f, -0.181519f, -0.173018f}},
    {{-0.010040f, -0.098834f, -0.113951f},{0.107437f, -0.184384f, -0.091239f},{-0.118594f, -0.192341f, -0.213126f}}
  },
  {
    {{-0.039283f, -0.094944f, 0.073971f},{0.061974f, -0.101480f, -0.193804f},{0.051119f, 0.004446f, -0.027000f}},
    {{0.070933f, -0.112774f, -0.023631f},{0.135492f, 0.099708f, 0.276948f},{0.361120f, 0.297712f, 0.257632f}},
    {{0.063801f, -0.045175f, 0.015107f},{-0.125666f, -0.354463f, -0.084665f},{-0.211662f, -0.212993f, -0.209532f}},
    {{-0.002591f, 0.016163f, 0.091443f},{-0.063051f, -0.047605f, 0.004365f},{0.062403f, 0.027779f, 0.066862f}},
    {{0.045348f, -0.038736f, -0.121357f},{0.051040f, 0.084999f, 0.100183f},{-0.033315f, -0.140920f, -0.034838f}},
    {{-0.009681f, -0.201127f, -0.142818f},{-0.021234f, 0.083448f, 0.093922f},{0.055472f, 0.055264f, -0.043962f}},
    {{-0.131317f, -0.160756f, -0.251154f},{0.028339f, 0.008485f, 0.055368f},{-0.053590f, -0.044372f, 0.072155f}},
    {{-0.101616f, -0.224774f, -0.236993f},{-0.063139f, -0.009829f, 0.003639f},{0.108449f, 0.108414f, -0.024924f}}
  },
  {
    {{-0.164919f, -0.257971f, -0.138302f},{-0.308937f, 0.032353f, -0.037562f},{-0.270786f, -0.331178f, -0.293712f}},
    {{-0.211802f, 0.012296f, 0.009919f},{0.060213f, -0.184070f, 0.015657f},{0.067020f, 0.012654f, 0.176508f}},
    {{0.401808f, 0.309408f, 0.150254f},{0.179349f, -0.346954f, 0.138514f},{-0.052519f, -0.364452f, -0.130247f}},
    {{0.097069f, 0.250318f, 0.026202f},{0.056806f, -0.055754f, -0.123983f},{-0.004038f, -0.040366f, 0.060584f}},
    {{0.160271f, -0.079114f, -0.055391f},{0.097075f, -0.210800f, -0.047123f},{-0.031242f, -0.098795f, 0.151341f}},
    {{-0.025082f, -0.184152f, 0.069837f},{0.167906f, -0.014908f, -0.059274f},{0.067875f, 0.036923f, -0.004898f}},
    {{-0.048511f, -0.188093f, -0.033560f},{-0.031107f, -0.210508f, -0.114003f},{0.150676f, 0.069090f, -0.171697f}},
    {{0.192581f, -0.178355f, 0.297827f},{0.030843f, -0.203426f, 0.216343f},{0.242945f, 0.136345f, 0.032658f}}
  },
  {
    {{0.011733f, -0.009976f, -0.261894f},{-0.050284f, -0.125808f, -0.082799f},{0.115206f, -0.090760f, -0.115339f}},
    {{0.034942f, -0.108430f, -0.128712f},{0.094021f, 0.083899f, 0.154394f},{0.201984f, 0.075036f, 0.119827f}},
    {{-0.112568f, -0.002262f, 0.158351f},{-0.161828f, -0.427141f, -0.390453f},{-0.258069f, -0.277275f, -0.194548f}},
    {{-0.069300f, -0.126555f, 0.021341f},{0.084644f, 0.055473f, -0.060527f},{0.040492f, 0.077743f, 0.003149f}},
    {{0.083313f, 0.017517f, 0.017653f},{-0.036915f, 0.018947f, 0.174615f},{-0.201827f, -0.092225f, -0.118774f}},
    {{-0.091879f, -0.071624f, -0.069429f},{0.171648f, 0.007330f, 0.105138f},{-0.068509f, 0.177913f, 0.151985f}},
    {{0.097389f, 0.093486f, 0.012676f},{-0.008504f, 0.145646f, -0.000380f},{-0.213868f, -0.011129f, 0.058834f}},
    {{0.061751f, -0.086198f, -0.131383f},{-0.084815f, 0.018814f, -0.110419f},{-0.026750f, 0.090086f, 0.186467f}}
  },
  {
    {{-0.017417f, -0.226619f, -0.116647f},{0.094009f, 0.117371f, 0.075277f},{0.076998f, 0.113244f, -0.096672f}},
    {{0.293720f, 0.310599f, 0.211105f},{-0.018923f, 0.305354f, 0.117325f},{-0.216933f, -0.348323f, -0.251225f}},
    {{-0.117061f, 0.133898f, 0.251070f},{-0.232928f, -0.266710f, 0.233459f},{0.023689f, 0.162050f, 0.233084f}},
    {{0.010163f, 0.240906f, 0.398878f},{-0.168551f, 0.046324f, 0.050569f},{-0.078983f, -0.113551f, -0.301898f}},
    {{-0.029772f, 0.208432f, 0.136742f},{-0.386099f, -0.121863f, -0.199315f},{-0.111472f, 0.087658f, -0.041970f}},
    {{0.129581f, 0.040030f, -0.042749f},{0.002881f, -0.041244f, -0.144493f},{-0.335392f, -0.212974f, -0.100059f}},
    {{0.067462f, 0.007910f, 0.148881f},{-0.080197f, 0.032669f, -0.114796f},{-0.247938f, -0.227589f, -0.036039f}},
    {{0.128995f, -0.114576f, 0.051560f},{0.143976f, 0.062776f, -0.103121f},{-0.114260f, -0.110513f, -0.210100f}}
  },
  {
    {{0.056415f, 0.009308f, 0.003758f},{-0.156486f, 0.167824f, 0.266089f},{-0.118583f, -0.245239f, -0.022475f}},
    {{0.002121f, 0.173061f, 0.387674f},{0.132709f, -0.169233f, -0.216016f},{0.225620f, 0.189662f, 0.138580f}},
    {{-0.025934f, -0.200915f, -0.157525f},{-0.148094f, -0.200000f, -0.220214f},{-0.115777f, -0.058543f, -0.139896f}},
    {{0.081667f, -0.040046f, 0.066713f},{-0.022358f, -0.092612f, -0.264171f},{0.054258f, -0.070535f, 0.065689f}},
    {{0.018976f, -0.080197f, 0.028598f},{0.072620f, -0.031055f, -0.199587f},{0.134549f, 0.143397f, 0.116055f}},
    {{-0.244931f, -0.198677f, -0.122163f},{0.135919f, 0.112703f, -0.187471f},{0.172688f, 0.386615f, 0.240755f}},
    {{-0.258367f, -0.225772f, -0.030950f},{-0.018885f, -0.015888f, -0.278985f},{0.110378f, 0.216147f, 0.194519f}},
    {{-0.349821f, -0.092708f, 0.241415f},{0.129942f, -0.075804f, -0.342218f},{0.114492f, 0.215063f, -0.038450f}}
  },
  {
    {{-0.304253f, -0.066500f, -0.098506f},{-0.316457f, -0.133007f, -0.282876f},{-0.207869f, -0.330005f, -0.144919f}},
    {{0.113234f, -0.002640f, -0.103730f},{0.078815f, 0.142600f, 0.161466f},{0.212480f, 0.157673f, 0.132190f}},
    {{-0.030760f, -0.057044f, 0.107858f},{-0.477055f, -0.257717f, 0.065606f},{-0.420548f, -0.381423f, -0.319728f}},
    {{0.223023f, 0.025589f, 0.025792f},{-0.135900f, -0.153366f, -0.032995f},{-0.151870f, 0.126898f, -0.086748f}},
    {{0.159886f, 0.069866f, -0.124181f},{-0.120666f, -0.068242f, 0.136971f},{0.024614f, 0.009122f, 0.023687f}},
    {{0.144590f, -0.036090f, -0.018766f},{0.272438f, 0.063260f, -0.094200f},{0.101905f, 0.109254f, 0.122787f}},
    {{0.120236f, -0.129775f, -0.098235f},{-0.062437f, 0.047934f, -0.185335f},{0.077320f, -0.022884f, -0.095165f}},
    {{-0.129707f, -0.104288f, -0.013660f},{0.052541f, 0.054261f, -0.004120f},{0.148352f, 0.185162f, 0.024588f}}
  }
};

float conv2_b[16] = {0.004216f, -0.033370f, -0.012714f, -0.051135f, -0.108732f, -0.074141f, 0.026782f, 0.035035f, 0.082513f, 0.063899f, 0.077131f, 0.017817f, 0.032455f, 0.037929f, -0.012269f, -0.159445f};
# 7 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2
# 1 "C:/Users/Admin/Downloads/fc_weights.h" 1




float fc_w[10][400] = {
  {-0.007438f, -0.048844f, -0.124875f, -0.011950f, -0.009785f, -0.025164f, -0.027005f, -0.038505f, 0.040361f, 0.137109f, 0.013361f, 0.016784f, -0.105872f, 0.187043f, 0.148140f, 0.077905f, 0.088419f, -0.121741f, -0.007916f, -0.040456f, 0.009376f, 0.056009f, -0.184523f, -0.288694f, -0.195465f, -0.013173f, 0.065273f, -0.107915f, 0.045875f, -0.030214f, 0.059199f, -0.056519f, -0.022541f, -0.110339f, 0.030300f, 0.109207f, 0.070139f, -0.116594f, 0.038257f, 0.212630f, 0.019617f, 0.115135f, 0.037527f, 0.033558f, 0.184796f, 0.008085f, 0.033740f, -0.062856f, 0.044205f, 0.133860f, 0.010164f, -0.070319f, -0.049417f, -0.060669f, 0.049579f, 0.019658f, 0.106149f, 0.009555f, -0.053045f, -0.085745f, 0.051008f, 0.066695f, -0.285110f, -0.108047f, -0.075077f, -0.121607f, -0.122923f, 0.001189f, 0.037948f, 0.039567f, -0.161722f, -0.121518f, -0.096545f, -0.018889f, 0.041658f, 0.038995f, 0.015942f, -0.010756f, -0.028578f, 0.035222f, 0.112543f, 0.074736f, 0.054402f, -0.006660f, -0.178533f, 0.024267f, 0.062741f, 0.054463f, -0.014728f, 0.010107f, 0.022173f, -0.047464f, -0.038015f, 0.025247f, -0.036364f, -0.034590f, -0.284759f, -0.066095f, 0.026100f, 0.097127f, -0.201334f, -0.102777f, 0.102723f, -0.034333f, -0.172092f, -0.109028f, -0.015552f, -0.016291f, -0.038687f, -0.096375f, -0.039436f, 0.024151f, 0.028113f, 0.080666f, 0.049303f, 0.001654f, 0.029826f, -0.115398f, 0.000080f, 0.024359f, -0.039155f, -0.044676f, -0.099575f, 0.034364f, 0.061210f, -0.008869f, -0.055240f, -0.066657f, 0.017292f, 0.006436f, 0.016139f, 0.022526f, -0.011534f, 0.044603f, 0.035481f, 0.043297f, -0.022941f, -0.031470f, 0.141520f, 0.105742f, 0.062324f, 0.089808f, -0.056707f, 0.068256f, 0.085700f, 0.030888f, 0.007766f, -0.116448f, -0.286999f, -0.203891f, -0.076813f, -0.030079f, -0.084696f, -0.154948f, 0.011914f, 0.065903f, 0.037609f, 0.017011f, -0.023047f, 0.048823f, 0.130572f, 0.055514f, -0.036356f, 0.079017f, 0.019701f, 0.068736f, 0.079424f, -0.047148f, -0.135548f, -0.037654f, 0.045468f, 0.077720f, -0.124800f, -0.041185f, -0.000326f, -0.044258f, -0.000742f, 0.010989f, -0.032421f, -0.079126f, 0.081793f, -0.024072f, 0.004695f, 0.031647f, -0.138198f, 0.122197f, 0.093191f, 0.047261f, -0.203132f, -0.012487f, 0.057014f, -0.011133f, -0.030611f, -0.001749f, 0.053973f, -0.032069f, 0.014553f, 0.086339f, 0.062373f, 0.002053f, -0.105139f, 0.097998f, -0.015528f, 0.006142f, -0.063188f, 0.084628f, 0.048215f, -0.023614f, -0.072765f, 0.012945f, 0.125135f, 0.042203f, -0.046583f, 0.024852f, -0.054188f, 0.083826f, 0.135378f, 0.110543f, 0.138726f, -0.070890f, -0.153676f, 0.105207f, 0.065218f, 0.011626f, -0.117345f, -0.214093f, -0.237577f, 0.016557f, -0.050210f, -0.095692f, 0.019595f, -0.077622f, -0.003054f, -0.094387f, -0.095709f, -0.076641f, 0.074727f, -0.024426f, -0.198747f, 0.017161f, 0.011026f, 0.006029f, -0.085401f, 0.012934f, 0.077256f, -0.053882f, 0.026205f, 0.046293f, 0.090052f, 0.078237f, -0.013548f, -0.000279f, -0.023038f, -0.004289f, 0.054955f, -0.011545f, 0.056271f, -0.012812f, 0.030803f, 0.013837f, -0.056904f, -0.049740f, -0.149844f, -0.052820f, -0.000256f, 0.002674f, -0.033482f, -0.050261f, -0.074746f, -0.072461f, -0.014344f, 0.047522f, 0.053524f, 0.011116f, -0.024277f, -0.067599f, -0.185768f, -0.012767f, 0.001776f, -0.025405f, -0.119244f, -0.087804f, -0.018856f, 0.088528f, 0.028677f, 0.027497f, 0.048335f, 0.167914f, 0.078912f, -0.028215f, 0.148474f, 0.101965f, 0.090975f, -0.020280f, 0.003974f, 0.097209f, 0.035014f, 0.125366f, -0.069806f, -0.055632f, -0.051093f, -0.088478f, -0.035878f, -0.013810f, 0.079017f, 0.018768f, 0.116795f, 0.041559f, -0.006355f, 0.064716f, -0.043396f, -0.059144f, -0.020523f, -0.001329f, 0.009447f, 0.093136f, -0.024792f, -0.098496f, -0.109253f, 0.066149f, 0.050022f, 0.092267f, 0.048287f, -0.012152f, 0.002396f, 0.024254f, -0.106886f, 0.052711f, 0.002668f, 0.067061f, -0.157615f, -0.018860f, 0.033077f, -0.044261f, -0.139018f, -0.228222f, -0.138152f, -0.055329f, -0.091029f, -0.063865f, -0.137717f, -0.184598f, -0.270453f, -0.071596f, 0.053775f, -0.059506f, -0.054162f, 0.093792f, 0.052677f, 0.117237f, -0.008687f, -0.058698f, 0.023694f, 0.049160f, 0.035427f, 0.009093f, -0.100392f, 0.001132f, 0.058871f, 0.029366f, -0.205272f, -0.120193f, -0.076599f, -0.191733f, -0.113248f, -0.296384f, -0.076992f, -0.028251f, -0.059992f, -0.118424f, -0.050458f, -0.044955f, 0.108779f, 0.077262f, -0.143128f, -0.014539f, -0.042779f, 0.051480f, 0.005610f, 0.085058f, -0.105811f, 0.035482f, 0.045595f, 0.077033f, 0.061446f, -0.023295f, 0.044490f, -0.069940f, 0.016343f, 0.067453f, 0.012267f, 0.010736f, -0.063473f, -0.168248f, -0.085260f, 0.069464f, 0.015298f, 0.078616f, -0.044520f, -0.104998f},
  {-0.025929f, 0.129542f, -0.003455f, 0.057352f, 0.009922f, -0.039831f, -0.036261f, 0.089738f, 0.056520f, -0.312310f, -0.109611f, 0.026619f, 0.099789f, -0.088812f, -0.001101f, -0.117239f, -0.023501f, 0.057260f, -0.146897f, 0.061899f, -0.054674f, 0.048005f, 0.051146f, 0.144589f, 0.144625f, -0.154355f, 0.117119f, 0.049308f, 0.120691f, -0.069390f, -0.110752f, 0.087399f, 0.034727f, -0.047662f, 0.035793f, -0.064317f, -0.067906f, -0.003060f, 0.086591f, -0.086785f, 0.025486f, -0.048164f, 0.068119f, 0.071898f, -0.016488f, 0.010608f, -0.072777f, 0.097638f, -0.251939f, -0.225586f, -0.068078f, -0.041322f, -0.024324f, -0.043219f, 0.067055f, -0.047880f, -0.031867f, 0.096608f, 0.085323f, 0.011670f, 0.040436f, 0.072843f, 0.165098f, -0.005189f, -0.010970f, 0.094998f, 0.060716f, 0.025724f, 0.019777f, 0.192059f, 0.063024f, 0.107337f, 0.148451f, -0.048093f, -0.018306f, -0.053970f, -0.014700f, 0.079616f, 0.113979f, 0.145098f, 0.080931f, -0.016507f, 0.014368f, 0.219608f, 0.176314f, -0.004355f, -0.024401f, 0.110581f, 0.150523f, 0.136678f, 0.051103f, 0.010976f, -0.007977f, 0.064513f, -0.006903f, 0.018311f, 0.009242f, 0.039401f, -0.162595f, -0.036830f, -0.071172f, -0.196991f, 0.169790f, 0.072877f, 0.069321f, 0.013774f, -0.093680f, 0.034547f, -0.045536f, -0.046152f, -0.108758f, -0.090745f, 0.112116f, -0.025717f, -0.039055f, -0.057962f, 0.012974f, 0.079288f, -0.082163f, -0.101471f, -0.061071f, 0.114094f, 0.049211f, -0.212133f, -0.096054f, -0.011014f, 0.082176f, 0.168286f, 0.102699f, 0.090509f, -0.056691f, -0.039924f, 0.063289f, 0.159872f, 0.168045f, -0.088002f, -0.024040f, 0.127917f, 0.086084f, 0.157253f, -0.078595f, 0.058146f, 0.146845f, -0.016123f, -0.066236f, 0.028314f, 0.010035f, 0.098579f, 0.040791f, -0.012834f, 0.018944f, -0.015688f, 0.142862f, -0.049611f, 0.028695f, -0.045200f, -0.104710f, 0.081046f, -0.054252f, -0.061937f, 0.010145f, -0.125107f, 0.089804f, -0.010330f, -0.018434f, -0.232065f, 0.029640f, 0.062110f, -0.035075f, -0.052864f, -0.007005f, 0.075368f, 0.084241f, 0.020056f, 0.016121f, -0.115222f, -0.195811f, -0.000804f, 0.120063f, 0.100983f, 0.003551f, -0.047135f, -0.086272f, -0.063050f, 0.044492f, -0.025091f, 0.077357f, 0.092430f, 0.001144f, -0.091183f, -0.037267f, 0.019256f, 0.012979f, -0.118825f, 0.002988f, 0.112832f, -0.000072f, -0.053167f, -0.059087f, -0.019188f, -0.130062f, 0.044724f, 0.085227f, -0.107371f, 0.096902f, -0.160541f, 0.098162f, -0.061424f, -0.169314f, -0.099728f, 0.008120f, 0.067077f, -0.076928f, -0.212269f, -0.190959f, -0.111231f, -0.031732f, -0.132002f, -0.214858f, 0.021892f, 0.150297f, 0.013716f, -0.281453f, -0.140650f, 0.075897f, -0.105401f, -0.236725f, -0.043530f, 0.036571f, 0.015053f, -0.009907f, -0.009858f, -0.098809f, -0.073341f, -0.046375f, 0.009293f, -0.035552f, 0.064036f, -0.022610f, -0.079970f, 0.083195f, 0.014902f, -0.026394f, -0.092800f, -0.083442f, 0.119523f, 0.057582f, -0.034309f, -0.087739f, 0.063820f, -0.068155f, 0.003362f, -0.062931f, -0.096585f, -0.125512f, -0.037193f, -0.017968f, 0.006439f, -0.115592f, -0.024656f, -0.006491f, -0.100786f, -0.047755f, -0.053817f, -0.174009f, 0.077463f, 0.020326f, -0.123602f, -0.090118f, -0.046339f, 0.033940f, 0.064590f, -0.025665f, 0.114190f, 0.148277f, -0.038461f, 0.107782f, 0.137385f, 0.105380f, 0.022635f, 0.019738f, -0.155046f, -0.172278f, -0.111063f, -0.008613f, 0.042924f, -0.040099f, -0.225333f, 0.090060f, 0.027461f, -0.011546f, -0.124683f, -0.054141f, 0.078496f, -0.071589f, 0.029170f, -0.128475f, -0.042249f, -0.080245f, 0.052728f, 0.091004f, 0.066197f, -0.093962f, -0.175155f, -0.131066f, 0.001778f, 0.006088f, 0.048405f, -0.044306f, -0.023051f, -0.230258f, -0.091268f, -0.050053f, -0.106053f, -0.012177f, -0.043014f, -0.094087f, -0.094556f, 0.005805f, -0.039540f, 0.037702f, -0.013732f, 0.041636f, 0.057653f, 0.093753f, 0.057549f, -0.085838f, -0.056330f, 0.077634f, 0.033126f, 0.011759f, -0.011288f, -0.055996f, 0.002612f, -0.090974f, 0.072491f, 0.064498f, 0.029504f, -0.067919f, -0.057560f, 0.160330f, 0.029180f, 0.013974f, 0.029457f, -0.022335f, 0.094657f, -0.039066f, -0.051152f, -0.029817f, 0.110810f, 0.057510f, 0.003702f, 0.023311f, -0.095421f, -0.043556f, 0.025793f, -0.028464f, -0.053292f, -0.064108f, -0.224702f, -0.095993f, -0.233622f, -0.231345f, -0.118495f, -0.296418f, 0.040492f, -0.025524f, -0.272699f, -0.010733f, 0.005810f, 0.020463f, -0.049667f, 0.003492f, 0.061717f, 0.068205f, -0.037670f, 0.036361f, -0.105473f, -0.032367f, -0.172607f, -0.032633f, -0.010767f, 0.024326f, 0.051490f, -0.065605f, -0.024415f, -0.178537f, 0.028088f, -0.093917f, -0.009857f, -0.048524f, 0.017074f, -0.135803f, -0.032013f, 0.080499f, 0.054972f, -0.037699f, -0.119876f, 0.113648f, 0.141597f},
  {-0.052442f, 0.033035f, 0.045846f, 0.147783f, 0.199874f, -0.093398f, -0.066291f, 0.009532f, 0.177245f, 0.060905f, -0.075133f, -0.133299f, -0.035170f, -0.030018f, -0.197883f, 0.001868f, -0.074488f, -0.042530f, 0.012311f, 0.022046f, 0.115056f, -0.004513f, -0.142068f, 0.042483f, 0.288478f, 0.062363f, -0.052110f, -0.011337f, -0.033892f, 0.007961f, -0.026281f, -0.048150f, 0.033564f, 0.029928f, 0.125513f, -0.014942f, -0.038648f, 0.008275f, 0.128882f, 0.118187f, -0.034965f, 0.032136f, -0.014148f, -0.072785f, -0.118205f, 0.099961f, -0.014636f, -0.118065f, -0.255675f, -0.224569f, -0.014290f, -0.019866f, -0.033015f, -0.069306f, -0.009074f, -0.064240f, -0.030506f, -0.008390f, -0.206297f, -0.177456f, 0.129738f, 0.141059f, 0.109109f, -0.012669f, 0.201826f, 0.120866f, 0.114244f, 0.008009f, 0.035611f, 0.178929f, -0.020048f, -0.104905f, -0.052369f, 0.043803f, 0.340947f, -0.054338f, 0.037908f, -0.007384f, -0.088955f, -0.253450f, -0.005272f, 0.038216f, 0.020528f, -0.062427f, -0.135498f, 0.112284f, 0.007310f, -0.027343f, -0.055457f, 0.120419f, 0.103501f, 0.117378f, 0.125989f, 0.196430f, 0.246153f, -0.011722f, 0.015625f, 0.098027f, 0.023523f, 0.005935f, 0.071713f, 0.022953f, 0.033963f, -0.025528f, -0.129962f, -0.026481f, -0.031299f, -0.005229f, -0.007187f, -0.020436f, 0.021456f, -0.128359f, -0.051809f, 0.100601f, 0.022928f, -0.053055f, -0.173019f, 0.055788f, 0.003399f, -0.090838f, 0.089380f, 0.007748f, -0.128963f, -0.025238f, -0.045026f, -0.039071f, 0.012866f, -0.096716f, -0.105830f, -0.114035f, -0.085835f, -0.034730f, -0.006380f, 0.099471f, 0.093552f, -0.060057f, -0.155155f, -0.121485f, 0.082197f, 0.002151f, 0.055580f, 0.056030f, -0.073605f, -0.036590f, -0.207557f, 0.028215f, 0.063401f, -0.118622f, -0.158997f, -0.062349f, -0.003942f, -0.010528f, -0.083101f, 0.044548f, 0.065403f, 0.006659f, -0.041234f, -0.055095f, 0.015240f, 0.042802f, -0.167795f, -0.153626f, -0.023267f, 0.014637f, -0.005198f, -0.085160f, 0.090369f, 0.033425f, 0.013107f, -0.045241f, 0.099714f, 0.081179f, 0.010378f, -0.031589f, 0.014315f, 0.061347f, -0.056050f, 0.009369f, -0.050219f, -0.145204f, 0.063939f, 0.035445f, -0.036750f, -0.080753f, -0.100634f, -0.049561f, 0.000654f, -0.036131f, -0.041060f, -0.001166f, 0.098688f, 0.169433f, 0.092359f, 0.048738f, 0.057961f, 0.012685f, -0.041456f, 0.001715f, 0.055438f, -0.079948f, -0.023971f, -0.077532f, 0.129548f, 0.013110f, 0.008239f, 0.005033f, -0.187070f, -0.082820f, -0.009392f, 0.052624f, -0.018743f, -0.088555f, -0.016485f, -0.015424f, -0.017426f, 0.106650f, 0.161513f, 0.053871f, 0.021679f, 0.104877f, 0.038202f, -0.097249f, -0.006277f, 0.033680f, -0.065183f, 0.151697f, 0.066366f, -0.056087f, -0.088289f, -0.213919f, 0.086665f, 0.022925f, 0.004690f, 0.044933f, -0.101040f, 0.110464f, 0.043661f, 0.048181f, 0.014011f, 0.026228f, 0.046472f, 0.114971f, 0.061763f, -0.009921f, 0.030922f, 0.084437f, -0.004033f, -0.016844f, -0.008835f, 0.058641f, -0.044620f, 0.024895f, -0.034804f, -0.031468f, 0.028786f, -0.088953f, -0.048452f, -0.006778f, -0.046760f, -0.070639f, 0.040431f, 0.054828f, -0.013944f, -0.055586f, 0.001464f, 0.018628f, -0.089916f, -0.038451f, 0.052035f, 0.138841f, -0.038138f, -0.069082f, -0.008660f, 0.128419f, 0.175011f, 0.072761f, -0.042971f, 0.007143f, 0.003601f, 0.014010f, -0.087245f, -0.159163f, -0.053777f, -0.003615f, 0.063680f, -0.157171f, -0.129964f, -0.164991f, -0.021134f, 0.043848f, 0.012681f, 0.047784f, 0.038308f, 0.018410f, 0.050026f, 0.113982f, 0.025106f, 0.027681f, -0.015390f, 0.074601f, 0.005820f, 0.015439f, 0.031327f, 0.049046f, 0.109123f, -0.043085f, 0.042060f, 0.036109f, 0.024351f, -0.051141f, -0.137111f, -0.025868f, -0.017630f, -0.081008f, -0.065362f, -0.010111f, -0.066554f, -0.030838f, 0.023647f, 0.105760f, 0.112808f, -0.019135f, 0.020236f, 0.082967f, 0.058673f, 0.126583f, 0.200907f, 0.095416f, -0.027535f, -0.018235f, 0.075765f, 0.014637f, 0.067721f, -0.040723f, -0.247615f, 0.159853f, 0.148113f, 0.017610f, -0.080958f, -0.114873f, -0.052677f, -0.109133f, -0.040277f, -0.087956f, 0.078608f, -0.108890f, 0.013388f, 0.067568f, 0.006308f, 0.191493f, -0.038403f, 0.008533f, 0.071609f, 0.037865f, -0.090443f, 0.120669f, -0.009928f, 0.037443f, 0.002858f, -0.068712f, 0.249070f, 0.072588f, 0.103240f, -0.057955f, -0.037221f, -0.086868f, -0.180832f, -0.087714f, 0.044881f, -0.035159f, -0.147631f, -0.100751f, 0.003049f, 0.253253f, 0.293238f, 0.029885f, -0.003498f, 0.128271f, -0.002456f, 0.002789f, -0.056984f, -0.126877f, 0.031459f, 0.036959f, 0.011329f, -0.109644f, -0.155962f, -0.026636f, -0.028745f, -0.096784f, 0.057169f, -0.065539f, 0.014033f, 0.053503f, 0.035529f, -0.042791f, -0.049081f, 0.075029f, 0.141771f, 0.111939f},
  {-0.029130f, -0.032706f, 0.040654f, 0.030113f, 0.066363f, -0.056991f, -0.097685f, 0.001155f, 0.010887f, -0.080682f, -0.050466f, -0.063744f, -0.079469f, -0.108209f, -0.147058f, -0.066562f, -0.044674f, -0.036400f, 0.014370f, -0.006846f, 0.054449f, -0.023585f, -0.001808f, 0.010745f, -0.154232f, -0.074423f, -0.106110f, -0.062456f, -0.141709f, -0.367818f, 0.005115f, -0.026988f, 0.037324f, 0.168111f, 0.093997f, -0.006395f, -0.037731f, -0.016692f, -0.047137f, -0.199692f, -0.083040f, -0.023067f, -0.063998f, 0.001688f, 0.020013f, -0.076477f, 0.014366f, 0.096483f, 0.065813f, 0.087818f, 0.031461f, 0.067039f, 0.053541f, -0.043111f, -0.122331f, -0.005592f, 0.034844f, 0.054986f, -0.051772f, -0.182479f, 0.084499f, 0.027137f, 0.083951f, 0.006873f, -0.045837f, -0.041536f, -0.120454f, -0.041219f, -0.086473f, -0.311241f, 0.089794f, 0.060463f, 0.000467f, -0.014053f, -0.112235f, 0.010174f, -0.018153f, -0.046620f, -0.059955f, -0.248316f, 0.029648f, -0.070755f, -0.147532f, -0.326084f, -0.278330f, -0.039991f, -0.098250f, 0.124399f, -0.106744f, -0.168661f, -0.058525f, -0.096851f, -0.079371f, -0.175658f, -0.042382f, -0.028909f, 0.066789f, 0.042767f, 0.011904f, 0.071862f, 0.002594f, -0.070176f, -0.109795f, 0.044074f, 0.025584f, 0.039489f, 0.011818f, 0.044920f, 0.124803f, 0.199642f, -0.055617f, -0.132847f, -0.189598f, -0.009989f, 0.017066f, -0.103461f, -0.089488f, -0.131452f, 0.015945f, 0.092136f, -0.023200f, -0.136237f, 0.023101f, 0.146731f, 0.061788f, -0.018348f, -0.046066f, -0.068302f, -0.200509f, -0.276189f, -0.075597f, -0.109922f, -0.122415f, -0.093737f, -0.013080f, -0.114788f, 0.037609f, -0.044927f, -0.215793f, -0.223720f, -0.004895f, 0.023709f, -0.011079f, -0.091195f, 0.014005f, 0.030706f, -0.110854f, -0.164701f, -0.073121f, 0.021371f, -0.052785f, -0.083017f, 0.115691f, 0.105206f, 0.082819f, -0.117214f, -0.070794f, 0.128492f, 0.099882f, 0.061962f, -0.180333f, -0.092769f, -0.040355f, -0.005004f, -0.020154f, -0.138174f, -0.111389f, -0.122559f, -0.002534f, 0.052699f, -0.026963f, -0.163533f, -0.033714f, 0.044280f, 0.087483f, 0.110825f, -0.001204f, -0.091835f, 0.016011f, -0.022085f, 0.020976f, 0.062348f, -0.002117f, 0.015903f, 0.059784f, -0.001010f, -0.026179f, 0.074029f, 0.098290f, -0.104947f, -0.187768f, -0.194057f, -0.043228f, 0.065607f, -0.006533f, -0.082425f, -0.036450f, 0.074428f, 0.151130f, 0.065636f, -0.037448f, -0.130145f, -0.070062f, -0.036770f, -0.025077f, -0.116601f, 0.028480f, 0.039432f, 0.070032f, 0.005678f, -0.172783f, -0.127827f, 0.059133f, 0.066379f, -0.001230f, -0.236068f, -0.140898f, -0.108462f, 0.026822f, -0.079364f, -0.059678f, -0.015945f, 0.069744f, 0.094685f, -0.026533f, 0.016218f, 0.004767f, -0.081899f, -0.084377f, -0.010838f, 0.076757f, 0.166391f, -0.008209f, -0.021668f, -0.037626f, 0.017396f, 0.078639f, 0.074541f, 0.222949f, 0.053021f, -0.072250f, -0.026218f, -0.003094f, 0.070133f, -0.095322f, -0.055428f, 0.003962f, 0.024507f, 0.084851f, 0.019776f, 0.050605f, -0.010088f, 0.052787f, 0.019061f, -0.034039f, 0.016661f, 0.058932f, 0.050069f, 0.021683f, -0.072848f, -0.056178f, -0.068125f, -0.027638f, 0.110919f, -0.048614f, 0.037130f, -0.043970f, 0.011715f, -0.002092f, -0.070762f, 0.044752f, 0.009936f, 0.001013f, -0.000675f, -0.128046f, -0.004510f, 0.037841f, 0.027850f, -0.007276f, -0.016258f, -0.076353f, -0.189051f, -0.161496f, 0.012146f, 0.058075f, -0.252887f, -0.171509f, -0.157973f, 0.019355f, 0.069937f, 0.026765f, -0.140676f, -0.185968f, -0.068961f, -0.031318f, -0.050051f, -0.019975f, -0.261142f, -0.073317f, 0.038063f, 0.050638f, -0.002493f, 0.026722f, -0.027984f, 0.054268f, 0.008416f, -0.033986f, 0.043460f, 0.072906f, -0.087355f, -0.166532f, -0.137913f, 0.037005f, 0.109357f, -0.027519f, -0.083329f, -0.050047f, 0.107435f, 0.015418f, -0.048982f, 0.070997f, -0.035313f, -0.053393f, 0.014643f, -0.066350f, 0.009412f, 0.153398f, 0.151920f, 0.025106f, -0.070146f, 0.078662f, 0.151223f, -0.041306f, -0.167948f, -0.192812f, 0.058857f, 0.096244f, 0.057414f, -0.008497f, 0.074680f, 0.024624f, 0.026282f, 0.049746f, -0.033989f, -0.228086f, 0.052715f, 0.086279f, 0.104492f, 0.013316f, -0.215458f, 0.020632f, -0.002349f, 0.018137f, 0.042915f, -0.004156f, 0.030670f, -0.014332f, -0.017323f, -0.016794f, -0.041399f, 0.122734f, -0.075678f, -0.072853f, 0.082073f, 0.040076f, 0.196004f, 0.204382f, 0.142862f, 0.115553f, 0.034567f, 0.059235f, 0.152544f, -0.039414f, 0.004895f, -0.188975f, 0.066988f, 0.047139f, 0.034179f, 0.024013f, 0.069710f, -0.010030f, -0.071076f, -0.053958f, -0.043052f, -0.087342f, -0.170973f, -0.236526f, -0.050628f, 0.077782f, 0.068306f, 0.065480f, -0.040915f, -0.022401f, 0.118328f, -0.030040f, 0.019606f, -0.000796f, -0.022974f, 0.029743f, -0.009302f},
  {-0.042975f, 0.092218f, 0.120481f, 0.067531f, 0.089919f, 0.044257f, 0.077926f, 0.031746f, 0.030129f, -0.018562f, 0.013359f, -0.040696f, -0.011301f, 0.033080f, -0.045325f, 0.042945f, -0.057031f, 0.068157f, -0.001308f, 0.035684f, -0.041062f, -0.069234f, 0.101296f, 0.125629f, 0.050108f, -0.049558f, -0.020148f, -0.064234f, -0.040605f, 0.152137f, -0.020843f, 0.134452f, 0.177645f, 0.027748f, 0.083825f, 0.074018f, 0.042652f, -0.092812f, 0.035411f, -0.112304f, 0.009776f, -0.012544f, -0.025658f, -0.076004f, -0.109313f, 0.029377f, -0.045261f, -0.012987f, -0.121703f, -0.048664f, 0.090935f, -0.002852f, -0.061663f, 0.065022f, 0.071534f, 0.044378f, -0.009362f, -0.054900f, -0.032732f, -0.043516f, -0.018070f, -0.098005f, -0.108651f, -0.071392f, -0.012758f, -0.062916f, -0.030202f, 0.078955f, 0.073608f, 0.084595f, -0.009392f, -0.035216f, 0.028907f, -0.034797f, 0.052551f, 0.006932f, 0.043084f, 0.032360f, 0.157914f, 0.162186f, 0.018578f, 0.041059f, 0.006883f, 0.111092f, 0.194209f, -0.048212f, 0.020130f, -0.133389f, -0.037197f, 0.107620f, -0.017566f, 0.114899f, -0.052005f, -0.082757f, 0.011115f, -0.035509f, 0.085480f, -0.009474f, -0.086676f, 0.002951f, -0.068699f, 0.074809f, 0.055168f, -0.003471f, 0.077860f, -0.077997f, 0.069311f, 0.042143f, -0.013822f, -0.039932f, -0.071403f, 0.109552f, -0.079153f, -0.015947f, -0.033164f, 0.004295f, -0.018702f, 0.018172f, 0.067225f, -0.044057f, -0.118900f, 0.018667f, 0.050402f, -0.053160f, -0.192044f, 0.077383f, 0.105075f, 0.172580f, 0.217020f, 0.189571f, 0.025095f, 0.094419f, 0.125899f, 0.172216f, 0.162595f, 0.016153f, 0.020352f, -0.091511f, 0.182589f, 0.104409f, 0.013039f, -0.096552f, -0.061403f, 0.003622f, -0.058931f, -0.092956f, -0.031390f, 0.062760f, 0.131121f, 0.087389f, -0.106455f, 0.024340f, 0.164170f, 0.038374f, -0.057288f, 0.045664f, 0.078959f, -0.081571f, -0.045733f, -0.029102f, -0.001509f, 0.017214f, -0.014200f, 0.010657f, -0.093287f, 0.037312f, 0.040083f, 0.008661f, 0.071341f, 0.064060f, -0.007815f, 0.052896f, 0.021533f, 0.078822f, 0.023057f, -0.010584f, -0.066477f, -0.079778f, -0.050544f, 0.051317f, -0.091571f, 0.024630f, -0.028151f, 0.007378f, 0.032196f, -0.004341f, 0.080670f, -0.017834f, 0.006359f, 0.095069f, 0.039468f, 0.011934f, -0.053822f, -0.044577f, 0.080741f, -0.008242f, 0.066940f, -0.002640f, -0.118932f, -0.114439f, 0.119970f, 0.057668f, 0.015629f, 0.032898f, 0.022721f, -0.045831f, -0.002379f, -0.027844f, -0.005012f, 0.003471f, 0.043246f, 0.034447f, 0.040514f, 0.036528f, 0.035584f, 0.029528f, -0.017040f, 0.012351f, -0.043059f, 0.107516f, 0.001055f, 0.080815f, -0.110755f, -0.202061f, -0.024873f, -0.134939f, 0.033284f, -0.054511f, -0.008828f, 0.028637f, 0.001464f, -0.110277f, -0.082514f, -0.099547f, 0.072386f, -0.029653f, 0.036612f, -0.046188f, -0.091183f, 0.036610f, 0.042245f, 0.023687f, -0.070480f, 0.103630f, -0.046315f, 0.044116f, -0.029484f, -0.057646f, -0.043817f, -0.062343f, -0.034415f, -0.037518f, -0.099624f, -0.193390f, -0.155299f, -0.029494f, -0.051850f, -0.193794f, -0.091299f, -0.109827f, 0.021534f, 0.095233f, 0.107598f, -0.018445f, -0.004546f, 0.068893f, 0.089489f, 0.077753f, 0.074187f, 0.081372f, 0.026803f, 0.008690f, -0.051030f, -0.027764f, 0.109112f, -0.013165f, -0.006115f, 0.075628f, 0.037823f, -0.102785f, -0.019984f, 0.123215f, 0.044804f, 0.089838f, 0.093706f, -0.042034f, 0.108266f, 0.184928f, -0.041579f, 0.019294f, -0.055707f, 0.004317f, 0.018984f, -0.050390f, 0.050815f, -0.122572f, -0.169872f, -0.005024f, 0.019354f, -0.025137f, 0.089411f, -0.083477f, -0.182958f, -0.240189f, -0.194931f, -0.035626f, -0.000697f, -0.099926f, -0.098236f, -0.103835f, 0.109927f, 0.110147f, 0.043275f, -0.005501f, -0.021130f, 0.024450f, 0.083237f, 0.056996f, 0.060053f, 0.049346f, -0.097472f, -0.028852f, -0.115991f, -0.004694f, -0.000139f, -0.093186f, -0.120279f, -0.209617f, -0.169199f, -0.034855f, 0.023979f, -0.278878f, -0.248319f, -0.221179f, -0.055131f, -0.147017f, -0.058633f, 0.009543f, -0.084374f, -0.031609f, 0.003886f, 0.050825f, 0.034777f, 0.160667f, 0.052127f, 0.016791f, -0.074398f, -0.036981f, -0.003353f, 0.063234f, 0.041821f, 0.074387f, -0.026589f, -0.079796f, -0.106404f, 0.029597f, -0.064833f, -0.190259f, -0.157204f, -0.101759f, -0.096698f, -0.097706f, 0.012125f, -0.148296f, 0.063819f, -0.031711f, 0.074154f, 0.020643f, -0.072121f, -0.005894f, -0.096546f, -0.186127f, -0.288332f, -0.064553f, 0.068997f, 0.026753f, -0.098366f, -0.186456f, -0.110593f, -0.061091f, -0.050107f, -0.038508f, -0.106048f, -0.096421f, -0.068815f, 0.104285f, 0.095939f, 0.119085f, 0.015020f, 0.018417f, 0.047950f, 0.136114f, 0.073397f, -0.056461f, -0.003608f, -0.013590f, -0.070594f, -0.107620f, -0.065091f, 0.036817f},
  {0.081038f, -0.025934f, -0.005917f, -0.153313f, -0.189723f, 0.012575f, 0.062617f, -0.094132f, -0.120199f, -0.087964f, 0.024620f, 0.017034f, -0.092705f, 0.064348f, 0.055288f, -0.008152f, -0.060512f, -0.044559f, -0.022732f, -0.008978f, -0.031229f, -0.028675f, -0.039111f, -0.023326f, 0.089722f, -0.004968f, -0.098611f, 0.070132f, -0.002407f, 0.224637f, 0.017775f, 0.026271f, -0.132851f, -0.319114f, -0.036760f, -0.092921f, 0.026173f, -0.107197f, -0.240355f, -0.241451f, 0.002422f, -0.039962f, -0.006440f, -0.039497f, -0.057894f, 0.030462f, -0.055040f, 0.068783f, 0.040092f, 0.161611f, 0.017188f, -0.003706f, -0.072019f, 0.041345f, 0.123668f, -0.044669f, 0.002621f, -0.050818f, 0.100141f, 0.252336f, -0.012669f, -0.058247f, 0.073024f, 0.018288f, -0.050994f, 0.050371f, -0.070309f, -0.008854f, -0.035662f, -0.088906f, 0.056467f, 0.142017f, 0.027388f, 0.032832f, 0.047127f, -0.033533f, -0.041435f, -0.004884f, 0.110211f, 0.050022f, 0.001007f, -0.043410f, -0.014804f, 0.116965f, 0.128038f, -0.032242f, -0.084716f, -0.016962f, -0.220064f, -0.230497f, 0.013504f, -0.081540f, -0.025099f, -0.047063f, -0.083413f, -0.106298f, 0.010712f, 0.066346f, 0.150027f, 0.056210f, -0.082854f, -0.126766f, -0.026506f, -0.017082f, 0.085290f, -0.099247f, -0.027837f, -0.063926f, -0.157151f, -0.282914f, -0.020837f, -0.020471f, 0.021506f, -0.092203f, -0.068716f, -0.022769f, 0.053424f, 0.083920f, 0.017933f, 0.005416f, 0.076785f, -0.019450f, 0.054051f, 0.076192f, 0.064886f, 0.039919f, 0.057868f, 0.017797f, 0.003609f, -0.041922f, 0.069939f, 0.056678f, -0.028442f, -0.322811f, -0.353430f, 0.011705f, 0.052306f, -0.028839f, -0.036154f, -0.293595f, 0.028323f, -0.072421f, -0.049518f, 0.005893f, -0.016657f, 0.013663f, 0.010340f, -0.083517f, -0.058598f, 0.102775f, 0.055477f, -0.024876f, -0.088385f, 0.025962f, -0.026649f, 0.065962f, 0.059701f, -0.023296f, -0.097128f, -0.117118f, -0.017377f, 0.002193f, -0.045810f, -0.082784f, -0.025243f, -0.023934f, -0.037776f, -0.096543f, -0.044878f, -0.067172f, -0.054537f, 0.049673f, 0.032186f, 0.007949f, 0.011998f, -0.189642f, -0.017408f, -0.005357f, 0.050679f, 0.057308f, -0.144735f, -0.074007f, -0.000195f, -0.096727f, 0.005389f, -0.067993f, -0.124106f, -0.009333f, -0.171380f, -0.203915f, -0.076013f, -0.118113f, 0.026870f, -0.036446f, -0.058573f, 0.025515f, 0.056118f, 0.064278f, 0.111192f, 0.037218f, -0.076162f, -0.028131f, 0.026353f, 0.027893f, -0.057145f, -0.068473f, -0.075868f, -0.093245f, -0.194349f, -0.102293f, -0.214373f, 0.021772f, 0.013983f, -0.175050f, 0.014863f, -0.084000f, -0.135781f, -0.024173f, 0.016159f, -0.017874f, -0.140643f, -0.011113f, 0.046115f, 0.025233f, -0.007716f, -0.373596f, -0.048754f, 0.099202f, 0.014110f, 0.142867f, -0.141064f, -0.113189f, -0.005943f, 0.026222f, 0.191326f, 0.043803f, -0.052253f, 0.004761f, -0.122820f, -0.066017f, 0.070648f, 0.014094f, 0.024965f, -0.126431f, -0.125595f, -0.008483f, 0.068583f, 0.063497f, 0.012520f, 0.048371f, -0.026620f, 0.021327f, 0.016942f, 0.096541f, 0.080128f, -0.085446f, 0.015017f, 0.036806f, -0.030587f, 0.106979f, -0.026110f, 0.074697f, 0.018820f, 0.072933f, 0.030810f, 0.059444f, 0.076282f, 0.039166f, -0.023928f, -0.048050f, -0.015553f, 0.071933f, 0.002252f, -0.036516f, -0.124175f, -0.065083f, -0.006735f, -0.025335f, -0.009614f, -0.022121f, -0.005106f, 0.128761f, 0.037550f, -0.110825f, -0.048057f, -0.030215f, 0.016773f, 0.048769f, -0.084090f, -0.049693f, -0.064683f, -0.048952f, 0.000244f, -0.018587f, -0.023812f, 0.033853f, 0.012506f, -0.063650f, -0.070773f, 0.014816f, -0.102454f, 0.005762f, -0.014717f, 0.028022f, -0.070226f, 0.053846f, -0.022163f, -0.017890f, 0.067777f, 0.102757f, 0.040619f, 0.006800f, 0.042424f, -0.001536f, -0.016613f, -0.014478f, -0.001752f, 0.009155f, -0.017127f, -0.080273f, -0.050436f, 0.051338f, -0.001977f, -0.017844f, -0.044442f, 0.019519f, -0.184710f, 0.005053f, 0.137892f, 0.065255f, -0.195244f, -0.195489f, 0.041599f, 0.247235f, 0.203092f, 0.055506f, -0.000807f, -0.005323f, 0.167619f, 0.225820f, 0.165381f, 0.115552f, -0.024524f, -0.124203f, -0.105849f, 0.075595f, 0.113717f, 0.034801f, -0.067748f, -0.079514f, -0.095639f, 0.000285f, -0.022736f, -0.078507f, -0.003641f, -0.263412f, -0.113589f, 0.013940f, 0.084408f, -0.046488f, 0.084106f, 0.004520f, 0.074936f, 0.130299f, 0.097482f, 0.234853f, 0.121659f, 0.086937f, 0.067343f, -0.007685f, 0.070811f, 0.088561f, 0.032544f, -0.055470f, -0.081746f, -0.062165f, 0.001465f, 0.053054f, -0.005284f, -0.045668f, -0.089964f, 0.056230f, 0.036795f, -0.061352f, -0.018349f, -0.012413f, 0.130753f, 0.038943f, -0.039427f, 0.021029f, -0.048196f, -0.066009f, 0.054127f, 0.027461f, 0.038806f, -0.035765f, -0.070615f, -0.036382f, 0.004196f, -0.136931f},
  {0.157380f, 0.033169f, 0.014698f, 0.013206f, 0.070374f, 0.031803f, 0.038905f, -0.195481f, -0.113933f, -0.047155f, 0.041626f, 0.043033f, -0.213201f, -0.061891f, 0.066098f, 0.096991f, 0.086613f, -0.089669f, -0.055407f, -0.045956f, -0.011660f, 0.107152f, -0.030569f, -0.051887f, -0.104649f, 0.136704f, 0.046923f, 0.070401f, 0.089755f, 0.074162f, 0.095623f, 0.015759f, -0.032703f, 0.010019f, -0.323233f, 0.080936f, -0.023652f, -0.011498f, -0.104197f, -0.024247f, 0.065735f, 0.050273f, -0.030437f, -0.023928f, 0.106388f, 0.026346f, 0.040001f, -0.125281f, 0.049517f, 0.064741f, 0.041893f, -0.099592f, -0.145888f, -0.045809f, -0.045141f, -0.080770f, 0.020789f, 0.010885f, 0.158170f, 0.192488f, -0.008809f, -0.006777f, 0.076932f, 0.150521f, 0.070211f, -0.013163f, -0.108319f, -0.083633f, -0.064791f, -0.084241f, -0.200619f, -0.336248f, -0.126389f, -0.019194f, -0.173653f, 0.044810f, -0.016877f, 0.010492f, 0.017435f, 0.055396f, 0.031016f, 0.074766f, 0.113150f, 0.199911f, 0.049376f, 0.063845f, 0.046211f, 0.173141f, 0.043859f, -0.070540f, 0.012023f, -0.058391f, 0.101015f, -0.018894f, -0.089384f, -0.079054f, -0.285601f, -0.185795f, -0.036273f, -0.140133f, 0.104837f, 0.154274f, 0.161144f, 0.053568f, -0.042956f, 0.093268f, 0.114300f, 0.062265f, 0.026238f, -0.084132f, -0.019200f, -0.019036f, 0.044987f, -0.215839f, -0.114852f, 0.013223f, 0.017751f, -0.091079f, 0.045103f, 0.031579f, -0.043052f, 0.029335f, -0.046172f, 0.012801f, -0.007830f, 0.109864f, 0.105293f, 0.045683f, 0.045966f, 0.054962f, 0.078054f, 0.040310f, -0.077880f, -0.085609f, -0.185923f, 0.104900f, -0.014825f, -0.035922f, -0.025316f, -0.013391f, 0.081853f, 0.077332f, 0.021901f, -0.015650f, -0.046364f, -0.048641f, 0.054760f, -0.081141f, -0.172552f, -0.133613f, 0.275426f, 0.220554f, 0.083202f, 0.006943f, 0.068499f, -0.007323f, 0.000464f, -0.083160f, -0.212298f, -0.054504f, 0.069094f, 0.022140f, 0.004447f, -0.150580f, -0.002816f, 0.030205f, 0.032880f, 0.018415f, 0.036233f, 0.003499f, -0.015112f, 0.003658f, 0.027458f, 0.036175f, 0.054550f, 0.044396f, 0.039132f, -0.018185f, 0.058319f, -0.008071f, 0.011003f, -0.010448f, -0.002091f, -0.015855f, -0.096854f, 0.090122f, 0.016862f, 0.068881f, -0.015564f, -0.076504f, -0.012985f, -0.061254f, 0.056337f, 0.050676f, -0.029729f, -0.052061f, -0.066087f, -0.062883f, 0.024694f, -0.035481f, 0.054335f, 0.067729f, 0.025834f, -0.056358f, -0.008671f, 0.050953f, -0.004216f, 0.054054f, -0.095558f, -0.140089f, 0.095918f, -0.068319f, 0.022829f, 0.079698f, 0.099652f, -0.023645f, 0.034634f, -0.042140f, 0.031447f, 0.004670f, -0.033136f, -0.036033f, 0.045773f, 0.004467f, 0.100969f, 0.072661f, 0.060776f, -0.011232f, 0.090951f, 0.033884f, -0.125031f, -0.040861f, -0.002090f, 0.040351f, -0.114779f, -0.078654f, -0.060995f, 0.005508f, -0.050290f, -0.177786f, -0.058738f, -0.078387f, -0.015294f, -0.023962f, 0.098255f, 0.018862f, 0.048896f, 0.010484f, 0.030033f, 0.008124f, -0.009546f, -0.134506f, -0.067662f, -0.071606f, 0.012287f, -0.055209f, -0.152175f, -0.142233f, -0.097664f, 0.019219f, -0.001864f, -0.072289f, 0.036092f, 0.104267f, 0.063128f, -0.069392f, -0.060217f, 0.030745f, 0.040289f, -0.013105f, -0.097191f, 0.015820f, 0.065571f, 0.077736f, -0.027011f, 0.100879f, 0.080036f, 0.068572f, 0.001546f, -0.065111f, 0.150622f, 0.084365f, 0.029371f, 0.032463f, -0.071997f, 0.143947f, -0.034463f, -0.051624f, 0.059195f, -0.107064f, 0.019050f, 0.019778f, 0.026789f, 0.048943f, 0.047717f, -0.059662f, 0.104403f, 0.065817f, 0.052907f, 0.054723f, 0.025739f, -0.090811f, -0.078490f, 0.018705f, 0.137309f, -0.128791f, -0.139339f, -0.196558f, -0.091400f, 0.067147f, -0.012775f, -0.119353f, -0.046221f, -0.034466f, 0.026223f, 0.017941f, 0.051420f, 0.006426f, 0.017466f, -0.002889f, 0.016319f, 0.006660f, 0.073710f, 0.058536f, -0.008678f, -0.079200f, -0.058849f, -0.084379f, -0.044080f, -0.029571f, -0.056429f, -0.092331f, -0.085921f, 0.141787f, 0.150316f, -0.229837f, -0.314501f, -0.061913f, 0.116405f, 0.012531f, -0.123516f, -0.359252f, -0.146701f, -0.093546f, -0.070148f, 0.012545f, -0.012674f, 0.018078f, 0.119381f, -0.005358f, -0.050324f, -0.233167f, -0.139660f, -0.142626f, -0.077992f, -0.240112f, -0.200014f, -0.162738f, 0.072121f, 0.111251f, -0.246630f, -0.145628f, 0.012899f, 0.197370f, 0.105556f, -0.308887f, -0.131333f, 0.010123f, 0.123337f, 0.011432f, -0.232397f, -0.001230f, 0.107882f, -0.052058f, 0.017889f, -0.021699f, -0.027715f, -0.109660f, -0.061155f, 0.018881f, -0.011450f, -0.143449f, -0.092146f, -0.097898f, -0.038923f, 0.020797f, -0.063251f, -0.031108f, -0.013140f, 0.006138f, 0.020936f, 0.057761f, 0.019692f, 0.024155f, -0.008196f, -0.091780f, 0.072921f, 0.146395f, 0.138735f, 0.032691f},
  {-0.031999f, 0.009489f, -0.069387f, -0.104293f, -0.121763f, 0.068995f, -0.030104f, 0.025549f, 0.079482f, -0.051093f, -0.030967f, -0.077664f, 0.036510f, 0.023323f, -0.026917f, -0.050483f, -0.072218f, 0.005998f, -0.036527f, -0.225645f, -0.026680f, -0.043275f, 0.059450f, -0.048942f, -0.255684f, -0.049518f, -0.123732f, -0.068529f, -0.075416f, -0.093600f, 0.028955f, 0.076930f, -0.072601f, 0.052862f, -0.001607f, -0.042165f, -0.053860f, 0.093188f, -0.075511f, -0.120452f, 0.010245f, -0.100752f, 0.018190f, -0.074909f, 0.036551f, 0.063398f, 0.019136f, 0.002937f, -0.101425f, -0.280408f, 0.047424f, 0.012685f, -0.005155f, -0.009462f, 0.027338f, 0.090557f, 0.000034f, 0.005916f, 0.106839f, 0.023481f, -0.062849f, 0.192013f, 0.087646f, -0.034049f, 0.078692f, 0.014158f, 0.140418f, 0.035146f, 0.053273f, 0.067239f, -0.036237f, 0.001022f, 0.014664f, 0.019364f, -0.086230f, -0.000129f, -0.025551f, -0.040108f, -0.002695f, -0.056018f, -0.086388f, -0.029238f, -0.099710f, -0.031484f, 0.152518f, -0.026940f, 0.049093f, 0.012737f, 0.145055f, -0.110214f, -0.025753f, 0.005503f, 0.023732f, 0.171632f, 0.163978f, 0.020484f, 0.002704f, 0.001261f, 0.193906f, -0.049198f, -0.112068f, -0.156116f, -0.251546f, -0.022975f, 0.093918f, 0.070489f, 0.023544f, 0.022629f, -0.035171f, 0.114592f, 0.136740f, 0.130138f, 0.116530f, -0.004810f, 0.062577f, 0.033822f, 0.047052f, 0.008531f, 0.005322f, 0.073478f, -0.054985f, 0.053976f, 0.028660f, -0.167445f, -0.105542f, -0.054045f, 0.013475f, -0.151243f, -0.268484f, -0.098693f, 0.029640f, -0.008949f, 0.007163f, 0.017128f, -0.032011f, -0.103489f, -0.019431f, 0.039374f, 0.110732f, 0.072529f, 0.014127f, 0.038736f, -0.015930f, 0.063608f, 0.056570f, -0.034618f, 0.001646f, 0.168696f, 0.104548f, -0.096422f, -0.051707f, -0.054450f, -0.152493f, 0.064770f, -0.088481f, -0.021052f, 0.054707f, -0.025881f, 0.111896f, 0.047507f, 0.079423f, 0.163348f, 0.000064f, 0.054701f, 0.007245f, 0.087758f, 0.024088f, -0.072394f, -0.081819f, 0.042568f, 0.000256f, 0.015336f, 0.054512f, 0.046576f, -0.047596f, -0.105753f, -0.066470f, -0.163507f, 0.025675f, 0.040419f, -0.021564f, -0.030964f, 0.006658f, 0.001934f, 0.108362f, 0.031648f, 0.036041f, -0.047289f, -0.038300f, 0.029397f, 0.057616f, 0.035725f, -0.017641f, -0.030253f, 0.124269f, -0.042572f, 0.068608f, -0.028864f, -0.155347f, -0.005883f, -0.137516f, 0.005863f, -0.075115f, 0.081918f, 0.020249f, -0.164044f, -0.083155f, -0.101047f, 0.042621f, 0.067482f, 0.064745f, -0.168296f, -0.129663f, -0.004461f, 0.017102f, -0.123147f, -0.109696f, 0.002771f, -0.040525f, 0.006304f, 0.220495f, 0.134932f, -0.066298f, -0.153007f, -0.243585f, 0.044716f, 0.025592f, 0.061565f, -0.045049f, 0.086084f, -0.031167f, -0.046495f, -0.011527f, -0.136798f, 0.007513f, 0.065297f, 0.078558f, 0.020529f, -0.017078f, -0.015820f, 0.055086f, 0.129134f, -0.046518f, -0.008885f, 0.003047f, -0.042316f, -0.036051f, -0.048492f, -0.095068f, 0.023964f, -0.049279f, 0.021787f, 0.004026f, 0.016461f, -0.032775f, 0.073256f, 0.094070f, 0.086824f, 0.103532f, -0.013040f, 0.006165f, -0.043392f, -0.075902f, 0.032526f, 0.063762f, -0.088518f, -0.005439f, -0.012167f, 0.027616f, 0.111888f, -0.063652f, -0.194769f, -0.169113f, -0.107198f, -0.098008f, 0.053386f, 0.019529f, -0.030103f, -0.032901f, -0.041113f, -0.026023f, -0.019584f, -0.088558f, -0.023922f, -0.004955f, -0.077503f, -0.270269f, 0.000540f, 0.065107f, 0.018467f, -0.054110f, -0.124970f, -0.210653f, -0.097388f, 0.087465f, -0.038832f, -0.158583f, 0.059685f, -0.009053f, 0.004022f, 0.063586f, -0.007020f, -0.008712f, 0.048467f, -0.156248f, 0.051486f, 0.042056f, 0.101932f, 0.081777f, 0.005906f, -0.081245f, 0.070596f, -0.026049f, -0.079093f, 0.090774f, -0.152575f, -0.018980f, -0.053805f, 0.050543f, 0.012307f, -0.191252f, -0.190132f, -0.068283f, -0.151728f, -0.129683f, -0.064283f, -0.141089f, -0.086860f, -0.132431f, 0.016515f, 0.047469f, 0.127307f, 0.168252f, 0.005815f, -0.039690f, -0.000520f, 0.133596f, 0.090129f, -0.040984f, -0.069946f, 0.062964f, 0.193679f, -0.148138f, -0.003486f, 0.067155f, -0.006691f, 0.005728f, -0.088196f, 0.007358f, 0.001965f, 0.105092f, 0.125374f, 0.049662f, 0.006605f, 0.106814f, 0.189046f, 0.170174f, -0.001776f, 0.014935f, 0.014518f, 0.062433f, 0.046892f, -0.181761f, -0.100399f, -0.004114f, -0.218168f, -0.037486f, -0.072807f, -0.096480f, 0.035783f, -0.027346f, -0.290506f, -0.295547f, -0.165881f, -0.226800f, -0.001466f, 0.014510f, 0.019027f, 0.061004f, 0.009520f, 0.151584f, 0.149656f, -0.019041f, 0.014949f, -0.088889f, -0.057387f, -0.074365f, -0.266790f, 0.021658f, 0.024462f, -0.157380f, -0.170379f, -0.208869f, -0.028585f, -0.045035f, -0.078472f, -0.184324f, -0.061746f, -0.076940f, -0.083338f},
  {-0.033463f, -0.063180f, -0.035848f, -0.044228f, -0.011839f, 0.002976f, -0.014135f, 0.065029f, -0.053188f, 0.033385f, 0.005279f, 0.046802f, 0.052453f, -0.054491f, -0.113729f, -0.011971f, 0.126159f, 0.029190f, 0.050595f, 0.159737f, -0.012896f, -0.014680f, -0.024590f, 0.010678f, 0.020559f, 0.064463f, -0.003400f, 0.053831f, 0.045546f, -0.094217f, 0.030479f, -0.085593f, -0.130285f, 0.049977f, 0.077710f, 0.092013f, 0.043556f, 0.129614f, 0.063497f, 0.146915f, 0.016048f, 0.091457f, 0.015731f, 0.046822f, 0.051026f, -0.066241f, 0.037539f, 0.017778f, 0.070255f, 0.105394f, -0.026833f, 0.024473f, 0.036613f, 0.031398f, -0.001296f, 0.010530f, -0.038783f, -0.050042f, -0.105768f, 0.029244f, 0.031847f, -0.127785f, -0.219733f, -0.076273f, -0.103840f, 0.033380f, 0.035738f, -0.027466f, -0.119206f, -0.218579f, -0.008880f, -0.137428f, -0.078655f, -0.054060f, -0.222900f, 0.007223f, 0.034847f, 0.040538f, -0.052703f, 0.002487f, 0.020646f, -0.025629f, -0.134632f, -0.202118f, -0.069794f, -0.025269f, -0.080296f, -0.177945f, 0.057365f, 0.059330f, 0.063575f, 0.069766f, 0.013784f, -0.079132f, -0.242080f, 0.017246f, -0.093831f, -0.145818f, -0.050560f, -0.134292f, -0.088507f, 0.057008f, -0.104755f, -0.056262f, -0.043629f, 0.008247f, 0.000031f, -0.125745f, 0.034929f, 0.133323f, -0.050495f, 0.089169f, 0.159677f, 0.089891f, 0.008900f, -0.014418f, 0.018980f, 0.085402f, -0.110254f, 0.004974f, -0.034161f, -0.146977f, -0.137640f, 0.106543f, 0.057709f, -0.004389f, -0.041090f, -0.021000f, 0.045213f, 0.067410f, 0.055159f, -0.000130f, -0.108130f, -0.042933f, 0.031865f, -0.048460f, -0.008071f, -0.019907f, -0.155110f, -0.104574f, 0.011207f, -0.003440f, 0.016054f, -0.100373f, -0.037564f, 0.000816f, 0.027806f, -0.037373f, -0.120649f, -0.026431f, 0.006964f, 0.015123f, -0.052244f, -0.024212f, -0.138741f, -0.025207f, -0.081671f, 0.026139f, -0.043453f, 0.042937f, -0.048280f, -0.032408f, 0.020773f, 0.034753f, -0.054313f, 0.052716f, -0.017169f, 0.049236f, -0.080710f, -0.037604f, -0.108433f, -0.009251f, -0.008235f, -0.043041f, 0.028372f, 0.114710f, -0.006946f, 0.081508f, -0.001609f, -0.029206f, -0.053950f, -0.013131f, -0.021419f, 0.015494f, -0.006525f, -0.089413f, 0.036146f, -0.087552f, 0.075666f, 0.065202f, -0.058427f, 0.127816f, 0.068879f, 0.018578f, -0.149573f, 0.046379f, -0.100372f, -0.130151f, -0.006456f, 0.038303f, 0.037500f, 0.066057f, 0.042443f, 0.015014f, -0.042397f, 0.081119f, 0.137700f, 0.041272f, 0.070898f, -0.045957f, 0.025550f, 0.049109f, 0.044618f, 0.169550f, 0.093735f, 0.161875f, 0.146058f, -0.026143f, 0.091598f, 0.078580f, -0.028548f, -0.060707f, 0.065220f, 0.116784f, 0.115484f, -0.045006f, 0.116000f, 0.047109f, -0.034732f, 0.041011f, -0.031487f, -0.052291f, 0.013404f, 0.047217f, 0.035032f, -0.065380f, -0.099346f, -0.071012f, 0.096328f, 0.145088f, -0.135071f, 0.011626f, 0.035255f, -0.051490f, -0.043194f, -0.069966f, -0.028663f, -0.060535f, 0.060139f, -0.015252f, -0.037085f, 0.015029f, 0.052494f, 0.067347f, 0.047264f, -0.027862f, -0.076330f, 0.003851f, 0.038969f, 0.040562f, -0.029168f, 0.058841f, -0.019026f, -0.000439f, 0.042009f, -0.093762f, -0.057736f, -0.040119f, 0.031489f, -0.075831f, 0.021296f, -0.041033f, -0.019998f, -0.021488f, 0.003882f, 0.007882f, 0.058407f, -0.099375f, 0.097973f, 0.057901f, 0.102256f, 0.034603f, 0.030824f, 0.035037f, -0.026994f, -0.016613f, 0.166126f, 0.075768f, 0.064895f, 0.034284f, -0.008290f, 0.105038f, 0.098311f, 0.029119f, 0.000250f, -0.070455f, 0.167705f, 0.106011f, 0.010946f, -0.076403f, 0.058015f, 0.027788f, 0.049742f, 0.030778f, -0.006916f, 0.016575f, 0.057354f, 0.056735f, 0.001503f, 0.054705f, 0.005610f, 0.066948f, 0.051709f, -0.027523f, -0.007957f, 0.015800f, -0.091464f, -0.028269f, -0.032964f, -0.010854f, 0.024496f, 0.036983f, -0.059006f, -0.060337f, 0.026788f, 0.004470f, 0.014141f, 0.038549f, -0.121844f, 0.066734f, -0.000881f, -0.103794f, -0.104425f, -0.041937f, 0.013881f, -0.062893f, -0.160142f, -0.074912f, 0.009520f, 0.083643f, -0.020023f, -0.134536f, -0.144914f, 0.095078f, 0.113158f, -0.103447f, -0.150384f, -0.104732f, -0.002789f, -0.100529f, -0.084524f, -0.099843f, -0.015614f, -0.022096f, 0.053720f, -0.025410f, -0.006658f, 0.074427f, -0.011505f, 0.056574f, 0.040031f, 0.147261f, 0.107784f, -0.018718f, -0.038003f, -0.091252f, -0.149158f, 0.023256f, 0.100976f, 0.116529f, -0.111518f, -0.055235f, -0.046256f, -0.005390f, -0.080469f, -0.029197f, 0.017857f, 0.047939f, -0.008180f, -0.062337f, 0.006517f, 0.103346f, 0.047780f, 0.031550f, 0.041127f, 0.064796f, 0.098213f, 0.117389f, 0.014105f, -0.046313f, -0.072710f, 0.023132f, 0.079378f, 0.051961f, -0.048671f, -0.059556f, 0.083648f, 0.013204f, -0.002862f, -0.085072f},
  {-0.085186f, -0.081407f, -0.070937f, -0.029479f, -0.076139f, -0.030479f, -0.005723f, -0.082764f, -0.035718f, 0.004675f, 0.052815f, 0.073403f, 0.020103f, 0.014594f, -0.020819f, 0.009540f, -0.015955f, 0.119093f, 0.015861f, -0.152608f, -0.072003f, -0.056385f, 0.114488f, 0.039477f, -0.017341f, 0.050651f, 0.076263f, -0.019803f, 0.042694f, -0.194514f, 0.043733f, 0.024028f, 0.029807f, 0.028103f, -0.250396f, -0.067066f, 0.058543f, 0.015915f, -0.041248f, -0.020032f, -0.030866f, -0.047683f, 0.041640f, 0.078739f, -0.075593f, 0.075149f, -0.080465f, -0.024512f, -0.003726f, -0.171648f, -0.039364f, 0.031494f, 0.159337f, 0.100032f, -0.041088f, 0.036600f, 0.038290f, 0.074522f, -0.115617f, -0.234660f, -0.047773f, -0.173782f, -0.014056f, 0.056104f, -0.259098f, -0.119275f, -0.090479f, 0.101258f, 0.137581f, -0.060206f, 0.002144f, 0.061085f, 0.112604f, 0.035316f, -0.006298f, 0.031165f, -0.054058f, 0.021799f, -0.078272f, -0.054693f, 0.101301f, 0.101739f, 0.030961f, -0.125551f, -0.248535f, 0.003837f, 0.039633f, -0.154110f, -0.016228f, 0.014443f, -0.050758f, -0.068231f, -0.124111f, -0.040827f, 0.047768f, -0.024867f, 0.084660f, 0.038688f, -0.073740f, -0.009479f, -0.116804f, -0.027305f, -0.001268f, -0.037768f, -0.069902f, 0.012151f, -0.079057f, -0.076291f, -0.007274f, 0.003571f, 0.056003f, 0.023061f, -0.107856f, 0.057407f, 0.023435f, -0.000996f, -0.013276f, 0.021656f, 0.017743f, 0.022281f, 0.036342f, 0.063771f, 0.092841f, -0.035645f, -0.021054f, -0.045016f, -0.097064f, -0.221064f, -0.167738f, -0.253450f, 0.000181f, 0.002921f, -0.062137f, -0.084893f, -0.134184f, 0.049954f, 0.064329f, 0.029542f, -0.098916f, 0.047552f, -0.048304f, -0.107670f, -0.100308f, 0.067586f, 0.015623f, -0.056650f, -0.032060f, 0.066676f, 0.065030f, 0.146181f, -0.069431f, -0.093223f, -0.139876f, -0.096873f, 0.040115f, 0.068381f, 0.016027f, -0.029060f, 0.018740f, -0.001606f, -0.005859f, -0.029869f, -0.044715f, 0.054859f, 0.052657f, 0.042543f, -0.041096f, 0.043567f, 0.113176f, 0.117406f, -0.032983f, -0.087768f, -0.011335f, -0.054193f, -0.027968f, -0.018424f, 0.138117f, 0.070227f, -0.022153f, -0.103887f, 0.150083f, 0.061106f, 0.050278f, 0.112260f, -0.038338f, -0.029410f, -0.050752f, -0.148307f, 0.031874f, 0.119476f, -0.089280f, -0.146808f, -0.024050f, -0.079667f, 0.023194f, -0.114761f, 0.037860f, 0.007364f, -0.050743f, -0.102992f, 0.017843f, 0.084095f, -0.028549f, -0.000456f, -0.023931f, 0.201531f, 0.087750f, 0.132725f, 0.051913f, 0.010738f, -0.039694f, 0.034704f, 0.089274f, 0.012902f, -0.157668f, -0.225032f, -0.015216f, 0.093754f, -0.086143f, -0.098975f, -0.034536f, 0.055997f, -0.000988f, -0.120362f, -0.099906f, -0.162400f, 0.093111f, 0.001126f, -0.070087f, -0.189312f, 0.042597f, 0.112822f, 0.052044f, 0.076299f, -0.086559f, -0.042861f, -0.116846f, -0.016894f, -0.012059f, -0.033088f, -0.037784f, -0.154151f, 0.149634f, -0.006706f, -0.040790f, -0.016495f, 0.012596f, 0.027573f, -0.048942f, -0.053517f, -0.017501f, 0.013352f, 0.105187f, 0.066080f, 0.014599f, -0.005920f, 0.011134f, -0.024823f, 0.028921f, -0.018435f, -0.026717f, 0.113569f, 0.069200f, -0.042618f, -0.089199f, -0.037891f, 0.100594f, 0.078541f, -0.063228f, -0.206656f, -0.016385f, 0.021121f, -0.048804f, -0.092571f, -0.032039f, -0.073478f, -0.078469f, -0.056413f, -0.042619f, -0.010353f, -0.023344f, 0.107850f, 0.032621f, 0.010924f, 0.085941f, 0.227954f, 0.090000f, 0.008136f, -0.030358f, 0.031449f, 0.042856f, 0.043419f, -0.006886f, -0.074270f, -0.002145f, -0.066965f, -0.133479f, -0.064572f, 0.058867f, -0.052100f, -0.054833f, -0.063866f, 0.041015f, 0.035657f, 0.031639f, 0.070105f, 0.042139f, 0.019210f, -0.052041f, 0.043368f, 0.102619f, 0.042768f, 0.055226f, 0.113493f, -0.011991f, 0.001148f, 0.139122f, 0.054758f, 0.045082f, -0.087808f, -0.189752f, 0.001741f, -0.090099f, -0.045545f, -0.022870f, 0.013556f, 0.074944f, -0.040297f, -0.067260f, 0.009347f, -0.078893f, -0.113237f, -0.052821f, -0.068383f, 0.011373f, -0.115372f, -0.099082f, 0.042750f, -0.023142f, -0.075003f, -0.092591f, -0.029761f, 0.153545f, 0.017707f, -0.141698f, 0.020849f, 0.081671f, 0.046588f, -0.048181f, -0.136280f, -0.025978f, -0.096722f, 0.027059f, 0.095722f, 0.065543f, -0.148952f, -0.137242f, 0.043894f, 0.066171f, 0.015925f, -0.150414f, 0.030402f, -0.103288f, -0.063458f, -0.150988f, -0.010565f, 0.219035f, 0.002341f, -0.352930f, -0.240815f, 0.020390f, 0.061745f, -0.041256f, -0.093912f, -0.017412f, -0.086424f, 0.010871f, 0.059324f, 0.019723f, 0.025720f, -0.100963f, 0.019686f, 0.096248f, 0.088413f, 0.001961f, 0.073997f, 0.065648f, 0.124932f, 0.053086f, -0.030918f, 0.064275f, 0.060984f, 0.036411f, -0.032108f, -0.046723f, -0.061781f, -0.023466f, -0.146926f, -0.178359f, -0.004878f}
};

float fc_b[10] = {0.029539f, 0.117321f, 0.052488f, -0.077619f, -0.070910f, 0.023996f, -0.061282f, -0.030835f, -0.015427f, 0.009139f};
# 8 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2
# 1 "C:/Users/Admin/Downloads/test_image.h" 1




int test_label = 7;

float test_image[28][28] = {
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.644959f, 1.930510f, 1.599576f, 1.497751f, 0.339481f, 0.034003f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 2.401455f, 2.808758f, 2.808758f, 2.808758f, 2.808758f, 2.643291f, 2.095977f, 2.095977f, 2.095977f, 2.095977f, 2.095977f, 2.095977f, 2.095977f, 2.095977f, 1.739587f, 0.237655f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.428579f, 1.026806f, 0.492220f, 1.026806f, 1.650489f, 2.465096f, 2.808758f, 2.439640f, 2.808758f, 2.808758f, 2.808758f, 2.757846f, 2.490553f, 2.808758f, 2.808758f, 1.357740f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.207833f, 0.415851f, -0.246018f, 0.428579f, 0.428579f, 0.428579f, 0.326753f, -0.156920f, 2.579650f, 2.808758f, 0.924980f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.632230f, 2.796030f, 2.235988f, -0.195105f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.144192f, 2.541466f, 2.821487f, 0.632230f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.217729f, 2.808758f, 2.605107f, 0.135829f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.326753f, 2.745117f, 2.808758f, 0.364938f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.268642f, 2.808758f, 1.955967f, -0.360572f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.309659f, 2.185075f, 2.732389f, 0.314025f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.179544f, 2.808758f, 1.892326f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.530405f, 2.770574f, 2.630563f, 0.301296f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.182377f, 2.388727f, 2.808758f, 1.688674f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.386028f, 2.159619f, 2.808758f, 2.363270f, 0.021275f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.059460f, 2.808758f, 2.808758f, 0.555861f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.029638f, 2.426911f, 2.808758f, 1.039534f, -0.411485f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.268642f, 2.808758f, 2.808758f, 0.237655f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 0.352209f, 2.656020f, 2.808758f, 2.808758f, 0.237655f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.115903f, 2.808758f, 2.808758f, 2.363270f, 0.084916f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, 1.115903f, 2.808758f, 2.210531f, -0.195105f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f},
  {-0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f, -0.424213f}
};
# 9 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp" 2


#ifndef HLS_FASTSIM
# 10 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"
int main() {

    float input[784];
    float output[10];

    float weights[5224];
    float bias[34];

    int idx=0;

    for(int oc=0;oc<8;oc++)
        for(int ic=0;ic<1;ic++)
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    weights[idx++] = conv1_w[oc][ic][i][j];

    for(int oc=0;oc<16;oc++)
        for(int ic=0;ic<8;ic++)
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    weights[idx++] = conv2_w[oc][ic][i][j];

    for(int o=0;o<10;o++)
        for(int i=0;i<400;i++)
            weights[idx++] = fc_w[o][i];

    idx=0;
    for(int i=0;i<8;i++) bias[idx++]=conv1_b[i];
    for(int i=0;i<16;i++) bias[idx++]=conv2_b[i];
    for(int i=0;i<10;i++) bias[idx++]=fc_b[i];

    for(int i=0;i<28;i++)
        for(int j=0;j<28;j++)
            input[i*28+j] = test_image[i][j];

    
#ifndef HLS_FASTSIM
#define conv2d apatb_conv2d_sw
#endif
# 45 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"
conv2d
#undef conv2d
# 45 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"
(input, weights, bias, output);
#undef conv2d
# 45 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"


    for(int i=0;i<10;i++)
        printf("%f\n",output[i]);

    return 0;
}
#endif
# 51 "C:/Users/Admin/Desktop/Bharat_ARM_Challenge/hls_component/conv2d_tb.cpp"

