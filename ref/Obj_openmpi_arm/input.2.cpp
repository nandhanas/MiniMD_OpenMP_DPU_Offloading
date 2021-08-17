# 1 "input.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "input.cpp"
# 32 "input.cpp"
# 1 "/usr/include/c++/8/cstdlib" 1 3
# 39 "/usr/include/c++/8/cstdlib" 3
       
# 40 "/usr/include/c++/8/cstdlib" 3

# 1 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 1 3
# 236 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 3

# 236 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 258 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 508 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 3
# 1 "/usr/include/c++/8/aarch64-redhat-linux/bits/os_defines.h" 1 3
# 39 "/usr/include/c++/8/aarch64-redhat-linux/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 428 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 442 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 443 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 444 "/usr/include/sys/cdefs.h" 2 3 4
# 429 "/usr/include/features.h" 2 3 4
# 452 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4




# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 6 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-lp64.h" 1 3 4
# 9 "/usr/include/gnu/stubs.h" 2 3 4
# 453 "/usr/include/features.h" 2 3 4
# 40 "/usr/include/c++/8/aarch64-redhat-linux/bits/os_defines.h" 2 3
# 509 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 2 3


# 1 "/usr/include/c++/8/aarch64-redhat-linux/bits/cpu_defines.h" 1 3
# 512 "/usr/include/c++/8/aarch64-redhat-linux/bits/c++config.h" 2 3
# 42 "/usr/include/c++/8/cstdlib" 2 3
# 75 "/usr/include/c++/8/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 32 "/usr/include/stdlib.h" 2 3 4

extern "C" {





# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/floatn.h" 1 3 4
# 23 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 24 "/usr/include/bits/floatn.h" 2 3 4
# 80 "/usr/include/bits/floatn.h" 3 4
typedef long double _Float128;
# 95 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 214 "/usr/include/bits/floatn-common.h" 3 4
typedef float _Float32;
# 251 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 96 "/usr/include/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;



extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     throw () __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     throw () __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     throw () __attribute__ ((__nonnull__ (3)));
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     throw () __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     throw () __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     throw () __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     throw () __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     throw () __attribute__ ((__nonnull__ (3)));
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/bits/types/locale_t.h" 3 4
# 1 "/usr/include/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 360 "/usr/include/stdlib.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}


__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4
extern "C" {

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 140 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 141 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 30 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 33 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 61 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 62 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 9 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 40 "/usr/include/sys/select.h" 2 3 4
# 49 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4
extern "C" {
# 101 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/sys/select.h" 3 4
}
# 180 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 77 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 54 "/usr/include/bits/pthreadtypes-arch.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  unsigned long int __pad1;
  unsigned long int __pad2;
  unsigned int __flags;
};
# 78 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 118 "/usr/include/bits/thread-shared-types.h" 3 4
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;
# 148 "/usr/include/bits/thread-shared-types.h" 3 4
  int __kind;
 




  int __spins;
  __pthread_list_t __list;
# 165 "/usr/include/bits/thread-shared-types.h" 3 4
 
};




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[8];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[64];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[48];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[8];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4


}
# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();



extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));



extern void free (void *__ptr) throw ();


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 567 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 607 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));





extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 672 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 685 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 695 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 707 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 728 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 739 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 749 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 759 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 771 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 781 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 797 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 823 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 869 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();







extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 954 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 1010 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 1011 "/usr/include/stdlib.h" 2 3 4
# 1020 "/usr/include/stdlib.h" 3 4
}
# 76 "/usr/include/c++/8/cstdlib" 2 3

# 1 "/usr/include/c++/8/bits/std_abs.h" 1 3
# 33 "/usr/include/c++/8/bits/std_abs.h" 3
       
# 34 "/usr/include/c++/8/bits/std_abs.h" 3
# 46 "/usr/include/c++/8/bits/std_abs.h" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::abs;


  inline long
  abs(long __i) { return __builtin_labs(__i); }



  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }







  inline constexpr double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline constexpr float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline constexpr long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }



  inline constexpr __int128
  abs(__int128 __x) { return __x >= 0 ? __x : -__x; }
# 106 "/usr/include/c++/8/bits/std_abs.h" 3

}
}
# 78 "/usr/include/c++/8/cstdlib" 2 3
# 121 "/usr/include/c++/8/cstdlib" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::div_t;
  using ::ldiv_t;

  using ::abort;



  using ::atexit;


  using ::at_quick_exit;


  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;


  using ::quick_exit;


  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;



  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }




}
# 195 "/usr/include/c++/8/cstdlib" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  using ::lldiv_t;





  using ::_Exit;



  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 227 "/usr/include/c++/8/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;


}

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}



}
# 33 "input.cpp" 2
# 1 "/usr/include/c++/8/cstdio" 1 3
# 39 "/usr/include/c++/8/cstdio" 3
       
# 40 "/usr/include/c++/8/cstdio" 3


# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4

extern "C" {



# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) throw ();







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;




extern char *tmpnam_r (char *__s) throw () ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 434 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 491 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 516 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 527 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 543 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 593 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 609 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 668 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 679 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 713 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 737 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 756 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;



extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;







extern void perror (const char *__s);





# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 788 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 806 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 864 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);




# 1 "/usr/include/bits/stdio.h" 1 3 4
# 38 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x0010) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x0020) != 0);
}
# 871 "/usr/include/stdio.h" 2 3 4
# 879 "/usr/include/stdio.h" 3 4
}
# 43 "/usr/include/c++/8/cstdio" 2 3
# 96 "/usr/include/c++/8/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;




  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;

  using ::tmpnam;

  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 157 "/usr/include/c++/8/cstdio" 3
namespace __gnu_cxx
{
# 175 "/usr/include/c++/8/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std
{
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
}
# 34 "input.cpp" 2
# 1 "/usr/include/c++/8/cstring" 1 3
# 39 "/usr/include/c++/8/cstring" 3
       
# 40 "/usr/include/c++/8/cstring" 3


# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4

extern "C" {




# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 99 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 204 "/usr/include/string.h" 3 4
extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 261 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 369 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) throw ();
# 421 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, locale_t __l) throw ();



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4






extern "C" {



extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}
# 104 "/usr/include/strings.h" 3 4
extern int ffs (int __i) throw () __attribute__ ((__const__));





extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));


}
# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 499 "/usr/include/string.h" 3 4
}
# 43 "/usr/include/c++/8/cstring" 2 3
# 71 "/usr/include/c++/8/cstring" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::memchr;
  using ::memcmp;
  using ::memcpy;
  using ::memmove;
  using ::memset;
  using ::strcat;
  using ::strcmp;
  using ::strcoll;
  using ::strcpy;
  using ::strcspn;
  using ::strerror;
  using ::strlen;
  using ::strncat;
  using ::strncmp;
  using ::strncpy;
  using ::strspn;
  using ::strtok;
  using ::strxfrm;
  using ::strchr;
  using ::strpbrk;
  using ::strrchr;
  using ::strstr;
# 120 "/usr/include/c++/8/cstring" 3

}
# 35 "input.cpp" 2
# 1 "/tmp/hpcx-2.8.1/ompi/include/mpi.h" 1
# 233 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 3 4
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 234 "/tmp/hpcx-2.8.1/ompi/include/mpi.h" 2
# 266 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
# 1 "/tmp/hpcx-2.8.1/ompi/include/mpi_portable_platform.h" 1
# 267 "/tmp/hpcx-2.8.1/ompi/include/mpi.h" 2
# 409 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"

# 409 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
extern "C" {






typedef ptrdiff_t MPI_Aint;
typedef long long MPI_Offset;
typedef long long MPI_Count;
typedef struct ompi_communicator_t *MPI_Comm;
typedef struct ompi_datatype_t *MPI_Datatype;
typedef struct ompi_errhandler_t *MPI_Errhandler;
typedef struct ompi_file_t *MPI_File;
typedef struct ompi_group_t *MPI_Group;
typedef struct ompi_info_t *MPI_Info;
typedef struct ompi_op_t *MPI_Op;
typedef struct ompi_request_t *MPI_Request;
typedef struct ompi_message_t *MPI_Message;
typedef struct ompi_status_public_t MPI_Status;
typedef struct ompi_win_t *MPI_Win;
typedef struct mca_base_var_enum_t *MPI_T_enum;
typedef struct ompi_mpit_cvar_handle_t *MPI_T_cvar_handle;
typedef struct mca_base_pvar_handle_t *MPI_T_pvar_handle;
typedef struct mca_base_pvar_session_t *MPI_T_pvar_session;




struct ompi_status_public_t {


    int MPI_SOURCE;
    int MPI_TAG;
    int MPI_ERROR;




    int _cancelled;
    size_t _ucount;
};
typedef struct ompi_status_public_t ompi_status_public_t;




typedef int (MPI_Datarep_extent_function)(MPI_Datatype, MPI_Aint *, void *);
typedef int (MPI_Datarep_conversion_function)(void *, MPI_Datatype,
                                              int, void *, MPI_Offset, void *);
typedef void (MPI_Comm_errhandler_function)(MPI_Comm *, int *, ...);





typedef void (ompi_file_errhandler_fn)(MPI_File *, int *, ...);
typedef void (MPI_Win_errhandler_function)(MPI_Win *, int *, ...);
typedef void (MPI_User_function)(void *, void *, int *, MPI_Datatype *);
typedef int (MPI_Comm_copy_attr_function)(MPI_Comm, int, void *,
                                            void *, void *, int *);
typedef int (MPI_Comm_delete_attr_function)(MPI_Comm, int, void *, void *);
typedef int (MPI_Type_copy_attr_function)(MPI_Datatype, int, void *,
                                            void *, void *, int *);
typedef int (MPI_Type_delete_attr_function)(MPI_Datatype, int,
                                              void *, void *);
typedef int (MPI_Win_copy_attr_function)(MPI_Win, int, void *,
                                           void *, void *, int *);
typedef int (MPI_Win_delete_attr_function)(MPI_Win, int, void *, void *);
typedef int (MPI_Grequest_query_function)(void *, MPI_Status *);
typedef int (MPI_Grequest_free_function)(void *);
typedef int (MPI_Grequest_cancel_function)(void *, int);





typedef MPI_Comm_errhandler_function MPI_Comm_errhandler_fn
        ;
typedef ompi_file_errhandler_fn MPI_File_errhandler_fn
        ;
typedef ompi_file_errhandler_fn MPI_File_errhandler_function;
typedef MPI_Win_errhandler_function MPI_Win_errhandler_fn
        ;
# 583 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
enum {

    MPI_TAG_UB,
    MPI_HOST,
    MPI_IO,
    MPI_WTIME_IS_GLOBAL,


    MPI_APPNUM,
    MPI_LASTUSEDCODE,
    MPI_UNIVERSE_SIZE,
    MPI_WIN_BASE,
    MPI_WIN_SIZE,
    MPI_WIN_DISP_UNIT,
    MPI_WIN_CREATE_FLAVOR,
    MPI_WIN_MODEL,



    IMPI_CLIENT_SIZE,
    IMPI_CLIENT_COLOR,
    IMPI_HOST_SIZE,
    IMPI_HOST_COLOR
};
# 697 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
enum {
  MPI_IDENT,
  MPI_CONGRUENT,
  MPI_SIMILAR,
  MPI_UNEQUAL
};





enum {
  MPI_THREAD_SINGLE,
  MPI_THREAD_FUNNELED,
  MPI_THREAD_SERIALIZED,
  MPI_THREAD_MULTIPLE
};






enum {
  MPI_COMBINER_NAMED,
  MPI_COMBINER_DUP,
  MPI_COMBINER_CONTIGUOUS,
  MPI_COMBINER_VECTOR,

  MPI_COMBINER_HVECTOR_INTEGER,



  MPI_COMBINER_HVECTOR,
  MPI_COMBINER_INDEXED,

  MPI_COMBINER_HINDEXED_INTEGER,



  MPI_COMBINER_HINDEXED,
  MPI_COMBINER_INDEXED_BLOCK,

  MPI_COMBINER_STRUCT_INTEGER,



  MPI_COMBINER_STRUCT,
  MPI_COMBINER_SUBARRAY,
  MPI_COMBINER_DARRAY,
  MPI_COMBINER_F90_REAL,
  MPI_COMBINER_F90_COMPLEX,
  MPI_COMBINER_F90_INTEGER,
  MPI_COMBINER_RESIZED,
  MPI_COMBINER_HINDEXED_BLOCK
};
# 773 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
enum {
  MPI_COMM_TYPE_SHARED,
  OMPI_COMM_TYPE_HWTHREAD,
  OMPI_COMM_TYPE_CORE,
  OMPI_COMM_TYPE_L1CACHE,
  OMPI_COMM_TYPE_L2CACHE,
  OMPI_COMM_TYPE_L3CACHE,
  OMPI_COMM_TYPE_SOCKET,
  OMPI_COMM_TYPE_NUMA,
  OMPI_COMM_TYPE_BOARD,
  OMPI_COMM_TYPE_HOST,
  OMPI_COMM_TYPE_CU,
  OMPI_COMM_TYPE_CLUSTER
};





enum {
  MPI_T_VERBOSITY_USER_BASIC,
  MPI_T_VERBOSITY_USER_DETAIL,
  MPI_T_VERBOSITY_USER_ALL,
  MPI_T_VERBOSITY_TUNER_BASIC,
  MPI_T_VERBOSITY_TUNER_DETAIL,
  MPI_T_VERBOSITY_TUNER_ALL,
  MPI_T_VERBOSITY_MPIDEV_BASIC,
  MPI_T_VERBOSITY_MPIDEV_DETAIL,
  MPI_T_VERBOSITY_MPIDEV_ALL
};




enum {
  MPI_T_SCOPE_CONSTANT,
  MPI_T_SCOPE_READONLY,
  MPI_T_SCOPE_LOCAL,
  MPI_T_SCOPE_GROUP,
  MPI_T_SCOPE_GROUP_EQ,
  MPI_T_SCOPE_ALL,
  MPI_T_SCOPE_ALL_EQ
};




enum {
  MPI_T_BIND_NO_OBJECT,
  MPI_T_BIND_MPI_COMM,
  MPI_T_BIND_MPI_DATATYPE,
  MPI_T_BIND_MPI_ERRHANDLER,
  MPI_T_BIND_MPI_FILE,
  MPI_T_BIND_MPI_GROUP,
  MPI_T_BIND_MPI_OP,
  MPI_T_BIND_MPI_REQUEST,
  MPI_T_BIND_MPI_WIN,
  MPI_T_BIND_MPI_MESSAGE,
  MPI_T_BIND_MPI_INFO
};




enum {
  MPI_T_PVAR_CLASS_STATE,
  MPI_T_PVAR_CLASS_LEVEL,
  MPI_T_PVAR_CLASS_SIZE,
  MPI_T_PVAR_CLASS_PERCENTAGE,
  MPI_T_PVAR_CLASS_HIGHWATERMARK,
  MPI_T_PVAR_CLASS_LOWWATERMARK,
  MPI_T_PVAR_CLASS_COUNTER,
  MPI_T_PVAR_CLASS_AGGREGATE,
  MPI_T_PVAR_CLASS_TIMER,
  MPI_T_PVAR_CLASS_GENERIC
};
# 925 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_NULL_DELETE_FN( MPI_Datatype datatype,
                                                  int type_keyval,
                                                  void* attribute_val_out,
                                                  void* extra_state );
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_NULL_COPY_FN( MPI_Datatype datatype,
                                                int type_keyval,
                                                void* extra_state,
                                                void* attribute_val_in,
                                                void* attribute_val_out,
                                                int* flag );
__attribute__((visibility("default"))) int OMPI_C_MPI_TYPE_DUP_FN( MPI_Datatype datatype,
                                          int type_keyval,
                                          void* extra_state,
                                          void* attribute_val_in,
                                          void* attribute_val_out,
                                          int* flag );
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_NULL_DELETE_FN( MPI_Comm comm,
                                                  int comm_keyval,
                                                  void* attribute_val_out,
                                                  void* extra_state );
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_NULL_COPY_FN( MPI_Comm comm,
                                                int comm_keyval,
                                                void* extra_state,
                                                void* attribute_val_in,
                                                void* attribute_val_out,
                                                int* flag );
__attribute__((visibility("default"))) int OMPI_C_MPI_COMM_DUP_FN( MPI_Comm comm, int comm_keyval,
                                          void* extra_state,
                                          void* attribute_val_in,
                                          void* attribute_val_out,
                                          int* flag );
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_NULL_DELETE_FN( MPI_Win window,
                                                 int win_keyval,
                                                 void* attribute_val_out,
                                                 void* extra_state );
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_NULL_COPY_FN( MPI_Win window, int win_keyval,
                                               void* extra_state,
                                               void* attribute_val_in,
                                               void* attribute_val_out,
                                               int* flag );
__attribute__((visibility("default"))) int OMPI_C_MPI_WIN_DUP_FN( MPI_Win window, int win_keyval,
                                         void* extra_state,
                                         void* attribute_val_in,
                                         void* attribute_val_out,
                                         int* flag );
# 979 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
__attribute__((visibility("default"))) extern struct ompi_predefined_communicator_t ompi_mpi_comm_world;
__attribute__((visibility("default"))) extern struct ompi_predefined_communicator_t ompi_mpi_comm_self;
__attribute__((visibility("default"))) extern struct ompi_predefined_communicator_t ompi_mpi_comm_null;

__attribute__((visibility("default"))) extern struct ompi_predefined_group_t ompi_mpi_group_empty;
__attribute__((visibility("default"))) extern struct ompi_predefined_group_t ompi_mpi_group_null;

__attribute__((visibility("default"))) extern struct ompi_predefined_request_t ompi_request_null;

__attribute__((visibility("default"))) extern struct ompi_predefined_message_t ompi_message_null;
__attribute__((visibility("default"))) extern struct ompi_predefined_message_t ompi_message_no_proc;

__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_null;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_min;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_max;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_sum;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_prod;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_land;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_band;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_lor;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_bor;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_lxor;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_bxor;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_maxloc;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_minloc;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_replace;
__attribute__((visibility("default"))) extern struct ompi_predefined_op_t ompi_mpi_op_no_op;


__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_datatype_null;

__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_char;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_signed_char;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_char;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_byte;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_short;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_short;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_unsigned;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_long;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_long;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_long_long_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_unsigned_long_long;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_float;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_double;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_long_double;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_wchar;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_packed;




__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_cxx_bool;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_cxx_cplex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_cxx_dblcplex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_cxx_ldblcplex;




__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_logical;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_character;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_real;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_dblprec;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_cplex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_dblcplex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_ldblcplex;


__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2integer;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2real;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2dblprec;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2cplex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_2dblcplex;

__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_float_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_double_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_longdbl_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_short_int;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_long_int;


__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_logical1;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_logical2;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_logical4;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_logical8;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer1;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer2;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer4;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer8;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_integer16;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_real2;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_real4;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_real8;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_real16;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_complex8;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_complex16;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_complex32;


__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_int8_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_uint8_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_int16_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_uint16_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_int32_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_uint32_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_int64_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_uint64_t;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_aint;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_offset;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_count;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_c_bool;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_c_float_complex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_c_double_complex;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_c_long_double_complex;

__attribute__((visibility("default"))) extern struct ompi_predefined_errhandler_t ompi_mpi_errhandler_null;
__attribute__((visibility("default"))) extern struct ompi_predefined_errhandler_t ompi_mpi_errors_are_fatal;
__attribute__((visibility("default"))) extern struct ompi_predefined_errhandler_t ompi_mpi_errors_return;

__attribute__((visibility("default"))) extern struct ompi_predefined_win_t ompi_mpi_win_null;
__attribute__((visibility("default"))) extern struct ompi_predefined_file_t ompi_mpi_file_null;

__attribute__((visibility("default"))) extern struct ompi_predefined_info_t ompi_mpi_info_null;
__attribute__((visibility("default"))) extern struct ompi_predefined_info_t ompi_mpi_info_env;

__attribute__((visibility("default"))) extern int *MPI_F_STATUS_IGNORE;
__attribute__((visibility("default"))) extern int *MPI_F_STATUSES_IGNORE;
# 1121 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_lb;
__attribute__((visibility("default"))) extern struct ompi_predefined_datatype_t ompi_mpi_ub;
# 1300 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
__attribute__((visibility("default"))) int MPI_Abort(MPI_Comm comm, int errorcode);
__attribute__((visibility("default"))) int MPI_Accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                  int target_rank, MPI_Aint target_disp, int target_count,
                                  MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Add_error_class(int *errorclass);
__attribute__((visibility("default"))) int MPI_Add_error_code(int errorclass, int *errorcode);
__attribute__((visibility("default"))) int MPI_Add_error_string(int errorcode, const char *string);
__attribute__((visibility("default"))) int MPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iallgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, const int recvcounts[],
                                  const int displs[], MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iallgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, const int recvcounts[],
                                  const int displs[], MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Alloc_mem(MPI_Aint size, MPI_Info info,
                                 void *baseptr);
__attribute__((visibility("default"))) int MPI_Allreduce(const void *sendbuf, void *recvbuf, int count,
                                 MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iallreduce(const void *sendbuf, void *recvbuf, int count,
                                 MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                                 MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                                 const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ialltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                                 MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                                 const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Alltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                 void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                 MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ialltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                 void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                 MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Barrier(MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ibarrier(MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Bcast(void *buffer, int count, MPI_Datatype datatype,
                             int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Bsend(const void *buf, int count, MPI_Datatype datatype,
                             int dest, int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ibcast(void *buffer, int count, MPI_Datatype datatype,
                                  int root, MPI_Comm comm,
             MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Bsend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Buffer_attach(void *buffer, int size);
__attribute__((visibility("default"))) int MPI_Buffer_detach(void *buffer, int *size);
__attribute__((visibility("default"))) int MPI_Cancel(MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int coords[]);
__attribute__((visibility("default"))) int MPI_Cart_create(MPI_Comm old_comm, int ndims, const int dims[],
                                   const int periods[], int reorder, MPI_Comm *comm_cart);
__attribute__((visibility("default"))) int MPI_Cart_get(MPI_Comm comm, int maxdims, int dims[],
                                int periods[], int coords[]);
__attribute__((visibility("default"))) int MPI_Cart_map(MPI_Comm comm, int ndims, const int dims[],
                                const int periods[], int *newrank);
__attribute__((visibility("default"))) int MPI_Cart_rank(MPI_Comm comm, const int coords[], int *rank);
__attribute__((visibility("default"))) int MPI_Cart_shift(MPI_Comm comm, int direction, int disp,
                                  int *rank_source, int *rank_dest);
__attribute__((visibility("default"))) int MPI_Cart_sub(MPI_Comm comm, const int remain_dims[], MPI_Comm *new_comm);
__attribute__((visibility("default"))) int MPI_Cartdim_get(MPI_Comm comm, int *ndims);
__attribute__((visibility("default"))) int MPI_Close_port(const char *port_name);
__attribute__((visibility("default"))) int MPI_Comm_accept(const char *port_name, MPI_Info info, int root,
                                   MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_c2f(MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Comm_call_errhandler(MPI_Comm comm, int errorcode);
__attribute__((visibility("default"))) int MPI_Comm_compare(MPI_Comm comm1, MPI_Comm comm2, int *result);
__attribute__((visibility("default"))) int MPI_Comm_connect(const char *port_name, MPI_Info info, int root,
                                    MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_create_errhandler(MPI_Comm_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_Comm_create_keyval(MPI_Comm_copy_attr_function *comm_copy_attr_fn,
                                          MPI_Comm_delete_attr_function *comm_delete_attr_fn,
                                          int *comm_keyval, void *extra_state);
__attribute__((visibility("default"))) int MPI_Comm_create_group(MPI_Comm comm, MPI_Group group, int tag, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_delete_attr(MPI_Comm comm, int comm_keyval);
__attribute__((visibility("default"))) int MPI_Comm_disconnect(MPI_Comm *comm);
__attribute__((visibility("default"))) int MPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_idup(MPI_Comm comm, MPI_Comm *newcomm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Comm_dup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm);
__attribute__((visibility("default"))) MPI_Comm MPI_Comm_f2c(int comm);
__attribute__((visibility("default"))) int MPI_Comm_free_keyval(int *comm_keyval);
__attribute__((visibility("default"))) int MPI_Comm_free(MPI_Comm *comm);
__attribute__((visibility("default"))) int MPI_Comm_get_attr(MPI_Comm comm, int comm_keyval,
                                     void *attribute_val, int *flag);
__attribute__((visibility("default"))) int MPI_Dist_graph_create(MPI_Comm comm_old, int n, const int nodes[],
                                         const int degrees[], const int targets[],
                                         const int weights[], MPI_Info info,
                                         int reorder, MPI_Comm * newcomm);
__attribute__((visibility("default"))) int MPI_Dist_graph_create_adjacent(MPI_Comm comm_old,
                                                  int indegree, const int sources[],
                                                  const int sourceweights[],
                                                  int outdegree,
                                                  const int destinations[],
                                                  const int destweights[],
                                                  MPI_Info info, int reorder,
                                                  MPI_Comm *comm_dist_graph);
__attribute__((visibility("default"))) int MPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree,
                                           int sources[], int sourceweights[],
                                           int maxoutdegree,
                                           int destinations[],
                                           int destweights[]);
__attribute__((visibility("default"))) int MPI_Dist_graph_neighbors_count(MPI_Comm comm,
                                                  int *inneighbors,
                                                  int *outneighbors,
                                                  int *weighted);
__attribute__((visibility("default"))) int MPI_Comm_get_errhandler(MPI_Comm comm, MPI_Errhandler *erhandler);
__attribute__((visibility("default"))) int MPI_Comm_get_info(MPI_Comm comm, MPI_Info *info_used);
__attribute__((visibility("default"))) int MPI_Comm_get_name(MPI_Comm comm, char *comm_name, int *resultlen);
__attribute__((visibility("default"))) int MPI_Comm_get_parent(MPI_Comm *parent);
__attribute__((visibility("default"))) int MPI_Comm_group(MPI_Comm comm, MPI_Group *group);
__attribute__((visibility("default"))) int MPI_Comm_join(int fd, MPI_Comm *intercomm);
__attribute__((visibility("default"))) int MPI_Comm_rank(MPI_Comm comm, int *rank);
__attribute__((visibility("default"))) int MPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group);
__attribute__((visibility("default"))) int MPI_Comm_remote_size(MPI_Comm comm, int *size);
__attribute__((visibility("default"))) int MPI_Comm_set_attr(MPI_Comm comm, int comm_keyval, void *attribute_val);
__attribute__((visibility("default"))) int MPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int MPI_Comm_set_info(MPI_Comm comm, MPI_Info info);
__attribute__((visibility("default"))) int MPI_Comm_set_name(MPI_Comm comm, const char *comm_name);
__attribute__((visibility("default"))) int MPI_Comm_size(MPI_Comm comm, int *size);
__attribute__((visibility("default"))) int MPI_Comm_spawn(const char *command, char *argv[], int maxprocs, MPI_Info info,
                                  int root, MPI_Comm comm, MPI_Comm *intercomm,
                                  int array_of_errcodes[]);
__attribute__((visibility("default"))) int MPI_Comm_spawn_multiple(int count, char *array_of_commands[], char **array_of_argv[],
                                           const int array_of_maxprocs[], const MPI_Info array_of_info[],
                                           int root, MPI_Comm comm, MPI_Comm *intercomm,
                                           int array_of_errcodes[]);
__attribute__((visibility("default"))) int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_split_type(MPI_Comm comm, int split_type, int key, MPI_Info info, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int MPI_Comm_test_inter(MPI_Comm comm, int *flag);
__attribute__((visibility("default"))) int MPI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                                        void *result_addr, MPI_Datatype datatype, int target_rank,
                                        MPI_Aint target_disp, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Dims_create(int nnodes, int ndims, int dims[]);
__attribute__((visibility("default"))) int MPI_Errhandler_c2f(MPI_Errhandler errhandler);
__attribute__((visibility("default"))) MPI_Errhandler MPI_Errhandler_f2c(int errhandler);
__attribute__((visibility("default"))) int MPI_Errhandler_free(MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_Error_class(int errorcode, int *errorclass);
__attribute__((visibility("default"))) int MPI_Error_string(int errorcode, char *string, int *resultlen);
__attribute__((visibility("default"))) int MPI_Exscan(const void *sendbuf, void *recvbuf, int count,
                              MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Fetch_and_op(const void *origin_addr, void *result_addr, MPI_Datatype datatype,
                                    int target_rank, MPI_Aint target_disp, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Iexscan(const void *sendbuf, void *recvbuf, int count,
                              MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_c2f(MPI_File file);
__attribute__((visibility("default"))) MPI_File MPI_File_f2c(int file);
__attribute__((visibility("default"))) int MPI_File_call_errhandler(MPI_File fh, int errorcode);
__attribute__((visibility("default"))) int MPI_File_create_errhandler(MPI_File_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_File_set_errhandler( MPI_File file, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int MPI_File_get_errhandler( MPI_File file, MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_File_open(MPI_Comm comm, const char *filename, int amode,
                                 MPI_Info info, MPI_File *fh);
__attribute__((visibility("default"))) int MPI_File_close(MPI_File *fh);
__attribute__((visibility("default"))) int MPI_File_delete(const char *filename, MPI_Info info);
__attribute__((visibility("default"))) int MPI_File_set_size(MPI_File fh, MPI_Offset size);
__attribute__((visibility("default"))) int MPI_File_preallocate(MPI_File fh, MPI_Offset size);
__attribute__((visibility("default"))) int MPI_File_get_size(MPI_File fh, MPI_Offset *size);
__attribute__((visibility("default"))) int MPI_File_get_group(MPI_File fh, MPI_Group *group);
__attribute__((visibility("default"))) int MPI_File_get_amode(MPI_File fh, int *amode);
__attribute__((visibility("default"))) int MPI_File_set_info(MPI_File fh, MPI_Info info);
__attribute__((visibility("default"))) int MPI_File_get_info(MPI_File fh, MPI_Info *info_used);
__attribute__((visibility("default"))) int MPI_File_set_view(MPI_File fh, MPI_Offset disp, MPI_Datatype etype,
                                     MPI_Datatype filetype, const char *datarep, MPI_Info info);
__attribute__((visibility("default"))) int MPI_File_get_view(MPI_File fh, MPI_Offset *disp,
                                     MPI_Datatype *etype,
                                     MPI_Datatype *filetype, char *datarep);
__attribute__((visibility("default"))) int MPI_File_read_at(MPI_File fh, MPI_Offset offset, void *buf,
                                    int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_read_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                        int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                     int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                         int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_iread_at(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iwrite_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iread_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iwrite_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_read(MPI_File fh, void *buf, int count,
                                 MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_read_all(MPI_File fh, void *buf, int count,
                                     MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write(MPI_File fh, const void *buf, int count,
                                  MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_all(MPI_File fh, const void *buf, int count,
                                      MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_iread(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iwrite(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iread_all(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iwrite_all(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_seek(MPI_File fh, MPI_Offset offset, int whence);
__attribute__((visibility("default"))) int MPI_File_get_position(MPI_File fh, MPI_Offset *offset);
__attribute__((visibility("default"))) int MPI_File_get_byte_offset(MPI_File fh, MPI_Offset offset,
                                            MPI_Offset *disp);
__attribute__((visibility("default"))) int MPI_File_read_shared(MPI_File fh, void *buf, int count,
                                        MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_shared(MPI_File fh, const void *buf, int count,
      MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_iread_shared(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_iwrite_shared(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_File_read_ordered(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_ordered(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_seek_shared(MPI_File fh, MPI_Offset offset, int whence);
__attribute__((visibility("default"))) int MPI_File_get_position_shared(MPI_File fh, MPI_Offset *offset);
__attribute__((visibility("default"))) int MPI_File_read_at_all_begin(MPI_File fh, MPI_Offset offset, void *buf,
                                              int count, MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_read_at_all_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_at_all_begin(MPI_File fh, MPI_Offset offset, const void *buf,
                                               int count, MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_write_at_all_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_read_all_begin(MPI_File fh, void *buf, int count,
                                           MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_read_all_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_all_begin(MPI_File fh, const void *buf, int count,
                                            MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_write_all_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_read_ordered_begin(MPI_File fh, void *buf, int count,
                                               MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_read_ordered_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_write_ordered_begin(MPI_File fh, const void *buf, int count,
                                                MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_File_write_ordered_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_File_get_type_extent(MPI_File fh, MPI_Datatype datatype,
                                            MPI_Aint *extent);
__attribute__((visibility("default"))) int MPI_File_set_atomicity(MPI_File fh, int flag);
__attribute__((visibility("default"))) int MPI_File_get_atomicity(MPI_File fh, int *flag);
__attribute__((visibility("default"))) int MPI_File_sync(MPI_File fh);
__attribute__((visibility("default"))) int MPI_Finalize(void);
__attribute__((visibility("default"))) int MPI_Finalized(int *flag);
__attribute__((visibility("default"))) int MPI_Free_mem(void *base);
__attribute__((visibility("default"))) int MPI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, int recvcount, MPI_Datatype recvtype,
                              int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Igather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                              void *recvbuf, int recvcount, MPI_Datatype recvtype,
                              int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, const int recvcounts[], const int displs[],
                               MPI_Datatype recvtype, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Igatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, const int recvcounts[], const int displs[],
                               MPI_Datatype recvtype, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Get_address(const void *location, MPI_Aint *address);
__attribute__((visibility("default"))) int MPI_Get_count(const MPI_Status *status, MPI_Datatype datatype, int *count);
__attribute__((visibility("default"))) int MPI_Get_elements(const MPI_Status *status, MPI_Datatype datatype, int *count);
__attribute__((visibility("default"))) int MPI_Get_elements_x(const MPI_Status *status, MPI_Datatype datatype, MPI_Count *count);
__attribute__((visibility("default"))) int MPI_Get(void *origin_addr, int origin_count,
                           MPI_Datatype origin_datatype, int target_rank,
                           MPI_Aint target_disp, int target_count,
                           MPI_Datatype target_datatype, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                      void *result_addr, int result_count, MPI_Datatype result_datatype,
                                      int target_rank, MPI_Aint target_disp, int target_count,
                                      MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Get_library_version(char *version, int *resultlen);
__attribute__((visibility("default"))) int MPI_Get_processor_name(char *name, int *resultlen);
__attribute__((visibility("default"))) int MPI_Get_version(int *version, int *subversion);
__attribute__((visibility("default"))) int MPI_Graph_create(MPI_Comm comm_old, int nnodes, const int index[],
                                    const int edges[], int reorder, MPI_Comm *comm_graph);
__attribute__((visibility("default"))) int MPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges,
                                 int index[], int edges[]);
__attribute__((visibility("default"))) int MPI_Graph_map(MPI_Comm comm, int nnodes, const int index[], const int edges[],
                                 int *newrank);
__attribute__((visibility("default"))) int MPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors);
__attribute__((visibility("default"))) int MPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors,
                                       int neighbors[]);
__attribute__((visibility("default"))) int MPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges);
__attribute__((visibility("default"))) int MPI_Grequest_complete(MPI_Request request);
__attribute__((visibility("default"))) int MPI_Grequest_start(MPI_Grequest_query_function *query_fn,
                                      MPI_Grequest_free_function *free_fn,
                                      MPI_Grequest_cancel_function *cancel_fn,
                                      void *extra_state, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Group_c2f(MPI_Group group);
__attribute__((visibility("default"))) int MPI_Group_compare(MPI_Group group1, MPI_Group group2, int *result);
__attribute__((visibility("default"))) int MPI_Group_difference(MPI_Group group1, MPI_Group group2,
                                        MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Group_excl(MPI_Group group, int n, const int ranks[],
                                  MPI_Group *newgroup);
__attribute__((visibility("default"))) MPI_Group MPI_Group_f2c(int group);
__attribute__((visibility("default"))) int MPI_Group_free(MPI_Group *group);
__attribute__((visibility("default"))) int MPI_Group_incl(MPI_Group group, int n, const int ranks[],
                                  MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Group_intersection(MPI_Group group1, MPI_Group group2,
                                          MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Group_range_excl(MPI_Group group, int n, int ranges[][3],
                                        MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Group_range_incl(MPI_Group group, int n, int ranges[][3],
                                        MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Group_rank(MPI_Group group, int *rank);
__attribute__((visibility("default"))) int MPI_Group_size(MPI_Group group, int *size);
__attribute__((visibility("default"))) int MPI_Group_translate_ranks(MPI_Group group1, int n, const int ranks1[],
                                             MPI_Group group2, int ranks2[]);
__attribute__((visibility("default"))) int MPI_Group_union(MPI_Group group1, MPI_Group group2,
                                   MPI_Group *newgroup);
__attribute__((visibility("default"))) int MPI_Ibsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Improbe(int source, int tag, MPI_Comm comm,
                               int *flag, MPI_Message *message,
                               MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Imrecv(void *buf, int count, MPI_Datatype type,
                              MPI_Message *message, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Info_c2f(MPI_Info info);
__attribute__((visibility("default"))) int MPI_Info_create(MPI_Info *info);
__attribute__((visibility("default"))) int MPI_Info_delete(MPI_Info info, const char *key);
__attribute__((visibility("default"))) int MPI_Info_dup(MPI_Info info, MPI_Info *newinfo);
__attribute__((visibility("default"))) MPI_Info MPI_Info_f2c(int info);
__attribute__((visibility("default"))) int MPI_Info_free(MPI_Info *info);
__attribute__((visibility("default"))) int MPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                char *value, int *flag);
__attribute__((visibility("default"))) int MPI_Info_get_nkeys(MPI_Info info, int *nkeys);
__attribute__((visibility("default"))) int MPI_Info_get_nthkey(MPI_Info info, int n, char *key);
__attribute__((visibility("default"))) int MPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                         int *flag);
__attribute__((visibility("default"))) int MPI_Info_set(MPI_Info info, const char *key, const char *value);
__attribute__((visibility("default"))) int MPI_Init(int *argc, char ***argv);
__attribute__((visibility("default"))) int MPI_Initialized(int *flag);
__attribute__((visibility("default"))) int MPI_Init_thread(int *argc, char ***argv, int required,
                                   int *provided);
__attribute__((visibility("default"))) int MPI_Intercomm_create(MPI_Comm local_comm, int local_leader,
                                        MPI_Comm bridge_comm, int remote_leader,
                                        int tag, MPI_Comm *newintercomm);
__attribute__((visibility("default"))) int MPI_Intercomm_merge(MPI_Comm intercomm, int high,
                                       MPI_Comm *newintercomm);
__attribute__((visibility("default"))) int MPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag,
                              MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source,
                             int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Irsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Isend(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Issend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Is_thread_main(int *flag);
__attribute__((visibility("default"))) int MPI_Lookup_name(const char *service_name, MPI_Info info, char *port_name);
__attribute__((visibility("default"))) int MPI_Message_c2f(MPI_Message message);
__attribute__((visibility("default"))) MPI_Message MPI_Message_f2c(int message);
__attribute__((visibility("default"))) int MPI_Mprobe(int source, int tag, MPI_Comm comm,
                               MPI_Message *message,
                               MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Mrecv(void *buf, int count, MPI_Datatype type,
                             MPI_Message *message, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Neighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ineighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Neighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int displs[],
                                           MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ineighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int displs[],
                                            MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                         void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                         MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ineighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                          void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                          MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ineighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Neighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                          void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                          MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ineighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                           void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                           MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Op_c2f(MPI_Op op);
__attribute__((visibility("default"))) int MPI_Op_commutative(MPI_Op op, int *commute);
__attribute__((visibility("default"))) int MPI_Op_create(MPI_User_function *function, int commute, MPI_Op *op);
__attribute__((visibility("default"))) int MPI_Open_port(MPI_Info info, char *port_name);
__attribute__((visibility("default"))) MPI_Op MPI_Op_f2c(int op);
__attribute__((visibility("default"))) int MPI_Op_free(MPI_Op *op);
__attribute__((visibility("default"))) int MPI_Pack_external(const char datarep[], const void *inbuf, int incount,
                                     MPI_Datatype datatype, void *outbuf,
                                     MPI_Aint outsize, MPI_Aint *position);
__attribute__((visibility("default"))) int MPI_Pack_external_size(const char datarep[], int incount,
                                          MPI_Datatype datatype, MPI_Aint *size);
__attribute__((visibility("default"))) int MPI_Pack(const void *inbuf, int incount, MPI_Datatype datatype,
                            void *outbuf, int outsize, int *position, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm,
                                 int *size);
__attribute__((visibility("default"))) int MPI_Pcontrol(const int level, ...);
__attribute__((visibility("default"))) int MPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Publish_name(const char *service_name, MPI_Info info,
                                    const char *port_name);
__attribute__((visibility("default"))) int MPI_Put(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                           int target_rank, MPI_Aint target_disp, int target_count,
                           MPI_Datatype target_datatype, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Query_thread(int *provided);
__attribute__((visibility("default"))) int MPI_Raccumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                   int target_rank, MPI_Aint target_disp, int target_count,
                                   MPI_Datatype target_datatype, MPI_Op op, MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source,
                                 int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source,
                            int tag, MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Reduce(const void *sendbuf, void *recvbuf, int count,
                              MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ireduce(const void *sendbuf, void *recvbuf, int count,
                              MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Reduce_local(const void *inbuf, void *inoutbuf, int count,
                                    MPI_Datatype datatype, MPI_Op op);
__attribute__((visibility("default"))) int MPI_Reduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                                      MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                                      MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                                      MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                                      MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Register_datarep(const char *datarep,
                                        MPI_Datarep_conversion_function *read_conversion_fn,
                                        MPI_Datarep_conversion_function *write_conversion_fn,
                                        MPI_Datarep_extent_function *dtype_file_extent_fn,
                                        void *extra_state);
__attribute__((visibility("default"))) int MPI_Request_c2f(MPI_Request request);
__attribute__((visibility("default"))) MPI_Request MPI_Request_f2c(int request);
__attribute__((visibility("default"))) int MPI_Request_free(MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Request_get_status(MPI_Request request, int *flag,
                                          MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype,
                            MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Rget_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                                       int target_rank, MPI_Aint target_disp, int target_count,
                                       MPI_Datatype target_datatype, MPI_Op op,
                                       MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Rput(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_cout,
                            MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Rsend(const void *ibuf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Rsend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Scan(const void *sendbuf, void *recvbuf, int count,
                            MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iscan(const void *sendbuf, void *recvbuf, int count,
                            MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iscatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Scatterv(const void *sendbuf, const int sendcounts[], const int displs[],
                                MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Iscatterv(const void *sendbuf, const int sendcounts[], const int displs[],
                                MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Send_init(const void *buf, int count, MPI_Datatype datatype,
                                 int dest, int tag, MPI_Comm comm,
                                 MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest,
                            int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Sendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                int dest, int sendtag, void *recvbuf, int recvcount,
                                MPI_Datatype recvtype, int source, int recvtag,
                                MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Sendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                        int dest, int sendtag, int source, int recvtag,
                                        MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Ssend_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Ssend(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Start(MPI_Request *request);
__attribute__((visibility("default"))) int MPI_Startall(int count, MPI_Request array_of_requests[]);
__attribute__((visibility("default"))) int MPI_Status_c2f(const MPI_Status *c_status, int *f_status);
__attribute__((visibility("default"))) int MPI_Status_f2c(const int *f_status, MPI_Status *c_status);
__attribute__((visibility("default"))) int MPI_Status_set_cancelled(MPI_Status *status, int flag);
__attribute__((visibility("default"))) int MPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype,
                                           int count);
__attribute__((visibility("default"))) int MPI_Status_set_elements_x(MPI_Status *status, MPI_Datatype datatype,
                                             MPI_Count count);
__attribute__((visibility("default"))) int MPI_Testall(int count, MPI_Request array_of_requests[], int *flag,
                               MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int MPI_Testany(int count, MPI_Request array_of_requests[], int *index,
                               int *flag, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Test_cancelled(const MPI_Status *status, int *flag);
__attribute__((visibility("default"))) int MPI_Testsome(int incount, MPI_Request array_of_requests[],
                                int *outcount, int array_of_indices[],
                                MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int MPI_Topo_test(MPI_Comm comm, int *status);
__attribute__((visibility("default"))) int MPI_Type_c2f(MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_Type_commit(MPI_Datatype *type);
__attribute__((visibility("default"))) int MPI_Type_contiguous(int count, MPI_Datatype oldtype,
                                       MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_darray(int size, int rank, int ndims,
                                          const int gsize_array[], const int distrib_array[],
                                          const int darg_array[], const int psize_array[],
                                          int order, MPI_Datatype oldtype,
                                          MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_complex(int p, int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_integer(int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_f90_real(int p, int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_hindexed_block(int count, int blocklength,
                                                  const MPI_Aint array_of_displacements[],
                                                  MPI_Datatype oldtype,
                                                  MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_hindexed(int count, const int array_of_blocklengths[],
                                            const MPI_Aint array_of_displacements[],
                                            MPI_Datatype oldtype,
                                            MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_hvector(int count, int blocklength, MPI_Aint stride,
                                           MPI_Datatype oldtype,
                                           MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_keyval(MPI_Type_copy_attr_function *type_copy_attr_fn,
                                          MPI_Type_delete_attr_function *type_delete_attr_fn,
                                          int *type_keyval, void *extra_state);
__attribute__((visibility("default"))) int MPI_Type_create_indexed_block(int count, int blocklength,
                                                 const int array_of_displacements[],
                                                 MPI_Datatype oldtype,
                                                 MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_struct(int count, const int array_of_block_lengths[],
                                          const MPI_Aint array_of_displacements[],
                                          const MPI_Datatype array_of_types[],
                                          MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_subarray(int ndims, const int size_array[], const int subsize_array[],
                                            const int start_array[], int order,
                                            MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb,
                                           MPI_Aint extent, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_delete_attr(MPI_Datatype type, int type_keyval);
__attribute__((visibility("default"))) int MPI_Type_dup(MPI_Datatype type, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_free(MPI_Datatype *type);
__attribute__((visibility("default"))) int MPI_Type_free_keyval(int *type_keyval);
__attribute__((visibility("default"))) MPI_Datatype MPI_Type_f2c(int datatype);
__attribute__((visibility("default"))) int MPI_Type_get_attr(MPI_Datatype type, int type_keyval,
                                     void *attribute_val, int *flag);
__attribute__((visibility("default"))) int MPI_Type_get_contents(MPI_Datatype mtype, int max_integers,
                                         int max_addresses, int max_datatypes,
                                         int array_of_integers[],
                                         MPI_Aint array_of_addresses[],
                                         MPI_Datatype array_of_datatypes[]);
__attribute__((visibility("default"))) int MPI_Type_get_envelope(MPI_Datatype type, int *num_integers,
                                         int *num_addresses, int *num_datatypes,
                                         int *combiner);
__attribute__((visibility("default"))) int MPI_Type_get_extent(MPI_Datatype type, MPI_Aint *lb,
                                       MPI_Aint *extent);
__attribute__((visibility("default"))) int MPI_Type_get_extent_x(MPI_Datatype type, MPI_Count *lb,
                                         MPI_Count *extent);
__attribute__((visibility("default"))) int MPI_Type_get_name(MPI_Datatype type, char *type_name,
                                     int *resultlen);
__attribute__((visibility("default"))) int MPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb,
                                            MPI_Aint *true_extent);
__attribute__((visibility("default"))) int MPI_Type_get_true_extent_x(MPI_Datatype datatype, MPI_Count *true_lb,
                                              MPI_Count *true_extent);
__attribute__((visibility("default"))) int MPI_Type_indexed(int count, const int array_of_blocklengths[],
                                    const int array_of_displacements[],
                                    MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Type_match_size(int typeclass, int size, MPI_Datatype *type);
__attribute__((visibility("default"))) int MPI_Type_set_attr(MPI_Datatype type, int type_keyval,
                                     void *attr_val);
__attribute__((visibility("default"))) int MPI_Type_set_name(MPI_Datatype type, const char *type_name);
__attribute__((visibility("default"))) int MPI_Type_size(MPI_Datatype type, int *size);
__attribute__((visibility("default"))) int MPI_Type_size_x(MPI_Datatype type, MPI_Count *size);
__attribute__((visibility("default"))) int MPI_Type_vector(int count, int blocklength, int stride,
                                   MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int MPI_Unpack(const void *inbuf, int insize, int *position,
                              void *outbuf, int outcount, MPI_Datatype datatype,
                              MPI_Comm comm);
__attribute__((visibility("default"))) int MPI_Unpublish_name(const char *service_name, MPI_Info info, const char *port_name);
__attribute__((visibility("default"))) int MPI_Unpack_external (const char datarep[], const void *inbuf, MPI_Aint insize,
                                        MPI_Aint *position, void *outbuf, int outcount,
                                        MPI_Datatype datatype);
__attribute__((visibility("default"))) int MPI_Waitall(int count, MPI_Request array_of_requests[],
                               MPI_Status *array_of_statuses);
__attribute__((visibility("default"))) int MPI_Waitany(int count, MPI_Request array_of_requests[],
                               int *index, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Wait(MPI_Request *request, MPI_Status *status);
__attribute__((visibility("default"))) int MPI_Waitsome(int incount, MPI_Request array_of_requests[],
                                int *outcount, int array_of_indices[],
                                MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int MPI_Win_allocate(MPI_Aint size, int disp_unit, MPI_Info info,
                                    MPI_Comm comm, void *baseptr, MPI_Win *win);
__attribute__((visibility("default"))) int MPI_Win_allocate_shared(MPI_Aint size, int disp_unit, MPI_Info info,
                                           MPI_Comm comm, void *baseptr, MPI_Win *win);
__attribute__((visibility("default"))) int MPI_Win_attach(MPI_Win win, void *base, MPI_Aint size);
__attribute__((visibility("default"))) int MPI_Win_c2f(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_call_errhandler(MPI_Win win, int errorcode);
__attribute__((visibility("default"))) int MPI_Win_complete(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_create(void *base, MPI_Aint size, int disp_unit,
                                  MPI_Info info, MPI_Comm comm, MPI_Win *win);
__attribute__((visibility("default"))) int MPI_Win_create_dynamic(MPI_Info info, MPI_Comm comm, MPI_Win *win);
__attribute__((visibility("default"))) int MPI_Win_create_errhandler(MPI_Win_errhandler_function *function,
                                             MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_Win_create_keyval(MPI_Win_copy_attr_function *win_copy_attr_fn,
                                         MPI_Win_delete_attr_function *win_delete_attr_fn,
                                         int *win_keyval, void *extra_state);
__attribute__((visibility("default"))) int MPI_Win_delete_attr(MPI_Win win, int win_keyval);
__attribute__((visibility("default"))) int MPI_Win_detach(MPI_Win win, const void *base);
__attribute__((visibility("default"))) MPI_Win MPI_Win_f2c(int win);
__attribute__((visibility("default"))) int MPI_Win_fence(int assert, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_flush(int rank, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_flush_all(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_flush_local(int rank, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_flush_local_all(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_free(MPI_Win *win);
__attribute__((visibility("default"))) int MPI_Win_free_keyval(int *win_keyval);
__attribute__((visibility("default"))) int MPI_Win_get_attr(MPI_Win win, int win_keyval,
                                    void *attribute_val, int *flag);
__attribute__((visibility("default"))) int MPI_Win_get_errhandler(MPI_Win win, MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int MPI_Win_get_group(MPI_Win win, MPI_Group *group);
__attribute__((visibility("default"))) int MPI_Win_get_info(MPI_Win win, MPI_Info *info_used);
__attribute__((visibility("default"))) int MPI_Win_get_name(MPI_Win win, char *win_name, int *resultlen);
__attribute__((visibility("default"))) int MPI_Win_lock(int lock_type, int rank, int assert, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_lock_all(int assert, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_post(MPI_Group group, int assert, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_set_attr(MPI_Win win, int win_keyval, void *attribute_val);
__attribute__((visibility("default"))) int MPI_Win_set_errhandler(MPI_Win win, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int MPI_Win_set_info(MPI_Win win, MPI_Info info);
__attribute__((visibility("default"))) int MPI_Win_set_name(MPI_Win win, const char *win_name);
__attribute__((visibility("default"))) int MPI_Win_shared_query(MPI_Win win, int rank, MPI_Aint *size, int *disp_unit, void *baseptr);
__attribute__((visibility("default"))) int MPI_Win_start(MPI_Group group, int assert, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_sync(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_test(MPI_Win win, int *flag);
__attribute__((visibility("default"))) int MPI_Win_unlock(int rank, MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_unlock_all(MPI_Win win);
__attribute__((visibility("default"))) int MPI_Win_wait(MPI_Win win);
__attribute__((visibility("default"))) double MPI_Wtick(void);
__attribute__((visibility("default"))) double MPI_Wtime(void);




__attribute__((visibility("default"))) int PMPI_Abort(MPI_Comm comm, int errorcode);
__attribute__((visibility("default"))) int PMPI_Accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                   int target_rank, MPI_Aint target_disp, int target_count,
                                   MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Add_error_class(int *errorclass);
__attribute__((visibility("default"))) int PMPI_Add_error_code(int errorclass, int *errorcode);
__attribute__((visibility("default"))) int PMPI_Add_error_string(int errorcode, const char *string);
__attribute__((visibility("default"))) int PMPI_Allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount,
                                  MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iallgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                  void *recvbuf, int recvcount,
                                  MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, const int recvcounts[],
                                   const int displs[], MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iallgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                   void *recvbuf, const int recvcounts[],
                                   const int displs[], MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Alloc_mem(MPI_Aint size, MPI_Info info,
                                  void *baseptr);
__attribute__((visibility("default"))) int PMPI_Allreduce(const void *sendbuf, void *recvbuf, int count,
                                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iallreduce(const void *sendbuf, void *recvbuf, int count,
                                  MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ialltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                                  MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                                  const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ialltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[],
                                  MPI_Datatype sendtype, void *recvbuf, const int recvcounts[],
                                  const int rdispls[], MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Alltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                  void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                  MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ialltoallw(const void *sendbuf, const int sendcounts[], const int sdispls[], const MPI_Datatype sendtypes[],
                                  void *recvbuf, const int recvcounts[], const int rdispls[], const MPI_Datatype recvtypes[],
                                  MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Dist_graph_create(MPI_Comm comm_old, int n, const int nodes[],
                                          const int degrees[], const int targets[],
                                          const int weights[], MPI_Info info,
                                          int reorder, MPI_Comm * newcomm);
__attribute__((visibility("default"))) int PMPI_Dist_graph_create_adjacent(MPI_Comm comm_old,
                                                   int indegree, const int sources[],
                                                   const int sourceweights[],
                                                   int outdegree,
                                                   const int destinations[],
                                                   const int destweights[],
                                                   MPI_Info info, int reorder,
                                                   MPI_Comm *comm_dist_graph);
__attribute__((visibility("default"))) int PMPI_Dist_graph_neighbors(MPI_Comm comm, int maxindegree,
                                            int sources[], int sourceweights[],
                                            int maxoutdegree,
                                             int destinations[],
                                            int destweights[]);
__attribute__((visibility("default"))) int PMPI_Dist_graph_neighbors_count(MPI_Comm comm,
                                                   int *inneighbors,
                                                   int *outneighbors,
                                                   int *weighted);
__attribute__((visibility("default"))) int PMPI_Barrier(MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ibarrier(MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Bcast(void *buffer, int count, MPI_Datatype datatype,
                              int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ibcast(void *buffer, int count, MPI_Datatype datatype,
                                  int root, MPI_Comm comm,
             MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Bsend(const void *buf, int count, MPI_Datatype datatype,
                              int dest, int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Bsend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Buffer_attach(void *buffer, int size);
__attribute__((visibility("default"))) int PMPI_Buffer_detach(void *buffer, int *size);
__attribute__((visibility("default"))) int PMPI_Cancel(MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Cart_coords(MPI_Comm comm, int rank, int maxdims, int coords[]);
__attribute__((visibility("default"))) int PMPI_Cart_create(MPI_Comm old_comm, int ndims, const int dims[],
                                    const int periods[], int reorder, MPI_Comm *comm_cart);
__attribute__((visibility("default"))) int PMPI_Cart_get(MPI_Comm comm, int maxdims, int dims[],
                                 int periods[], int coords[]);
__attribute__((visibility("default"))) int PMPI_Cart_map(MPI_Comm comm, int ndims, const int dims[],
                                 const int periods[], int *newrank);
__attribute__((visibility("default"))) int PMPI_Cart_rank(MPI_Comm comm, const int coords[], int *rank);
__attribute__((visibility("default"))) int PMPI_Cart_shift(MPI_Comm comm, int direction, int disp,
                                   int *rank_source, int *rank_dest);
__attribute__((visibility("default"))) int PMPI_Cart_sub(MPI_Comm comm, const int remain_dims[], MPI_Comm *new_comm);
__attribute__((visibility("default"))) int PMPI_Cartdim_get(MPI_Comm comm, int *ndims);
__attribute__((visibility("default"))) int PMPI_Close_port(const char *port_name);
__attribute__((visibility("default"))) int PMPI_Comm_accept(const char *port_name, MPI_Info info, int root,
                                    MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_c2f(MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Comm_call_errhandler(MPI_Comm comm, int errorcode);
__attribute__((visibility("default"))) int PMPI_Comm_compare(MPI_Comm comm1, MPI_Comm comm2, int *result);
__attribute__((visibility("default"))) int PMPI_Comm_connect(const char *port_name, MPI_Info info, int root,
                                     MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_create_errhandler(MPI_Comm_errhandler_function *function,
                                               MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_Comm_create_keyval(MPI_Comm_copy_attr_function *comm_copy_attr_fn,
                                           MPI_Comm_delete_attr_function *comm_delete_attr_fn,
                                           int *comm_keyval, void *extra_state);
__attribute__((visibility("default"))) int PMPI_Comm_create_group(MPI_Comm comm, MPI_Group group, int tag, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_delete_attr(MPI_Comm comm, int comm_keyval);
__attribute__((visibility("default"))) int PMPI_Comm_disconnect(MPI_Comm *comm);
__attribute__((visibility("default"))) int PMPI_Comm_dup(MPI_Comm comm, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_idup(MPI_Comm comm, MPI_Comm *newcomm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Comm_dup_with_info(MPI_Comm comm, MPI_Info info, MPI_Comm *newcomm);
__attribute__((visibility("default"))) MPI_Comm PMPI_Comm_f2c(int comm);
__attribute__((visibility("default"))) int PMPI_Comm_free_keyval(int *comm_keyval);
__attribute__((visibility("default"))) int PMPI_Comm_free(MPI_Comm *comm);
__attribute__((visibility("default"))) int PMPI_Comm_get_attr(MPI_Comm comm, int comm_keyval,
                                      void *attribute_val, int *flag);
__attribute__((visibility("default"))) int PMPI_Comm_get_errhandler(MPI_Comm comm, MPI_Errhandler *erhandler);
__attribute__((visibility("default"))) int PMPI_Comm_get_info(MPI_Comm comm, MPI_Info *info_used);
__attribute__((visibility("default"))) int PMPI_Comm_get_name(MPI_Comm comm, char *comm_name, int *resultlen);
__attribute__((visibility("default"))) int PMPI_Comm_get_parent(MPI_Comm *parent);
__attribute__((visibility("default"))) int PMPI_Comm_group(MPI_Comm comm, MPI_Group *group);
__attribute__((visibility("default"))) int PMPI_Comm_join(int fd, MPI_Comm *intercomm);
__attribute__((visibility("default"))) int PMPI_Comm_rank(MPI_Comm comm, int *rank);
__attribute__((visibility("default"))) int PMPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group);
__attribute__((visibility("default"))) int PMPI_Comm_remote_size(MPI_Comm comm, int *size);
__attribute__((visibility("default"))) int PMPI_Comm_set_attr(MPI_Comm comm, int comm_keyval, void *attribute_val);
__attribute__((visibility("default"))) int PMPI_Comm_set_errhandler(MPI_Comm comm, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int PMPI_Comm_set_info(MPI_Comm comm, MPI_Info info);
__attribute__((visibility("default"))) int PMPI_Comm_set_name(MPI_Comm comm, const char *comm_name);
__attribute__((visibility("default"))) int PMPI_Comm_size(MPI_Comm comm, int *size);
__attribute__((visibility("default"))) int PMPI_Comm_spawn(const char *command, char *argv[], int maxprocs, MPI_Info info,
                                   int root, MPI_Comm comm, MPI_Comm *intercomm,
                                   int array_of_errcodes[]);
__attribute__((visibility("default"))) int PMPI_Comm_spawn_multiple(int count, char *array_of_commands[], char **array_of_argv[],
                                            const int array_of_maxprocs[], const MPI_Info array_of_info[],
                                            int root, MPI_Comm comm, MPI_Comm *intercomm,
                                            int array_of_errcodes[]);
__attribute__((visibility("default"))) int PMPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_split_type(MPI_Comm comm, int split_type, int key, MPI_Info info, MPI_Comm *newcomm);
__attribute__((visibility("default"))) int PMPI_Comm_test_inter(MPI_Comm comm, int *flag);
__attribute__((visibility("default"))) int PMPI_Compare_and_swap(const void *origin_addr, const void *compare_addr,
                                         void *result_addr, MPI_Datatype datatype, int target_rank,
                                         MPI_Aint target_disp, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Dims_create(int nnodes, int ndims, int dims[]);
__attribute__((visibility("default"))) int PMPI_Errhandler_c2f(MPI_Errhandler errhandler);
__attribute__((visibility("default"))) MPI_Errhandler PMPI_Errhandler_f2c(int errhandler);
__attribute__((visibility("default"))) int PMPI_Errhandler_free(MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_Error_class(int errorcode, int *errorclass);
__attribute__((visibility("default"))) int PMPI_Error_string(int errorcode, char *string, int *resultlen);
__attribute__((visibility("default"))) int PMPI_Exscan(const void *sendbuf, void *recvbuf, int count,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Fetch_and_op(const void *origin_addr, void *result_addr, MPI_Datatype datatype,
                                     int target_rank, MPI_Aint target_disp, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Iexscan(const void *sendbuf, void *recvbuf, int count,
                               MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_c2f(MPI_File file);
__attribute__((visibility("default"))) MPI_File PMPI_File_f2c(int file);
__attribute__((visibility("default"))) int PMPI_File_call_errhandler(MPI_File fh, int errorcode);
__attribute__((visibility("default"))) int PMPI_File_create_errhandler(MPI_File_errhandler_function *function,
                                               MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_File_set_errhandler( MPI_File file, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int PMPI_File_get_errhandler( MPI_File file, MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_File_open(MPI_Comm comm, const char *filename, int amode,
                                  MPI_Info info, MPI_File *fh);
__attribute__((visibility("default"))) int PMPI_File_close(MPI_File *fh);
__attribute__((visibility("default"))) int PMPI_File_delete(const char *filename, MPI_Info info);
__attribute__((visibility("default"))) int PMPI_File_set_size(MPI_File fh, MPI_Offset size);
__attribute__((visibility("default"))) int PMPI_File_preallocate(MPI_File fh, MPI_Offset size);
__attribute__((visibility("default"))) int PMPI_File_get_size(MPI_File fh, MPI_Offset *size);
__attribute__((visibility("default"))) int PMPI_File_get_group(MPI_File fh, MPI_Group *group);
__attribute__((visibility("default"))) int PMPI_File_get_amode(MPI_File fh, int *amode);
__attribute__((visibility("default"))) int PMPI_File_set_info(MPI_File fh, MPI_Info info);
__attribute__((visibility("default"))) int PMPI_File_get_info(MPI_File fh, MPI_Info *info_used);
__attribute__((visibility("default"))) int PMPI_File_set_view(MPI_File fh, MPI_Offset disp, MPI_Datatype etype,
                                      MPI_Datatype filetype, const char *datarep, MPI_Info info);
__attribute__((visibility("default"))) int PMPI_File_get_view(MPI_File fh, MPI_Offset *disp,
                                      MPI_Datatype *etype,
                                      MPI_Datatype *filetype, char *datarep);
__attribute__((visibility("default"))) int PMPI_File_read_at(MPI_File fh, MPI_Offset offset, void *buf,
                                     int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_read_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                         int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                      int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                          int count, MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_iread_at(MPI_File fh, MPI_Offset offset, void *buf,
                                      int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_at(MPI_File fh, MPI_Offset offset, const void *buf,
                                       int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iread_at_all(MPI_File fh, MPI_Offset offset, void *buf,
                                          int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_at_all(MPI_File fh, MPI_Offset offset, const void *buf,
                                           int count, MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_read(MPI_File fh, void *buf, int count,
                                  MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_read_all(MPI_File fh, void *buf, int count,
                                      MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write(MPI_File fh, const void *buf, int count,
                                   MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_all(MPI_File fh, const void *buf, int count,
                                       MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_iread(MPI_File fh, void *buf, int count,
                                   MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iwrite(MPI_File fh, const void *buf, int count,
                                    MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iread_all(MPI_File fh, void *buf, int count,
                                       MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_all(MPI_File fh, const void *buf, int count,
                                        MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_seek(MPI_File fh, MPI_Offset offset, int whence);
__attribute__((visibility("default"))) int PMPI_File_get_position(MPI_File fh, MPI_Offset *offset);
__attribute__((visibility("default"))) int PMPI_File_get_byte_offset(MPI_File fh, MPI_Offset offset,
                                             MPI_Offset *disp);
__attribute__((visibility("default"))) int PMPI_File_read_shared(MPI_File fh, void *buf, int count,
                                         MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_shared(MPI_File fh, const void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_iread_shared(MPI_File fh, void *buf, int count,
                                          MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_iwrite_shared(MPI_File fh, const void *buf, int count,
                                           MPI_Datatype datatype, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_File_read_ordered(MPI_File fh, void *buf, int count,
                                          MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_ordered(MPI_File fh, const void *buf, int count,
                                           MPI_Datatype datatype, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_seek_shared(MPI_File fh, MPI_Offset offset, int whence);
__attribute__((visibility("default"))) int PMPI_File_get_position_shared(MPI_File fh, MPI_Offset *offset);
__attribute__((visibility("default"))) int PMPI_File_read_at_all_begin(MPI_File fh, MPI_Offset offset, void *buf,
                                               int count, MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_read_at_all_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_at_all_begin(MPI_File fh, MPI_Offset offset, const void *buf,
                                                int count, MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_write_at_all_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_read_all_begin(MPI_File fh, void *buf, int count,
                                            MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_read_all_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_all_begin(MPI_File fh, const void *buf, int count,
                                             MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_write_all_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_read_ordered_begin(MPI_File fh, void *buf, int count,
                                                MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_read_ordered_end(MPI_File fh, void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_write_ordered_begin(MPI_File fh, const void *buf, int count,
                                                 MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_File_write_ordered_end(MPI_File fh, const void *buf, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_File_get_type_extent(MPI_File fh, MPI_Datatype datatype,
                                             MPI_Aint *extent);
__attribute__((visibility("default"))) int PMPI_File_set_atomicity(MPI_File fh, int flag);
__attribute__((visibility("default"))) int PMPI_File_get_atomicity(MPI_File fh, int *flag);
__attribute__((visibility("default"))) int PMPI_File_sync(MPI_File fh);
__attribute__((visibility("default"))) int PMPI_Finalize(void);
__attribute__((visibility("default"))) int PMPI_Finalized(int *flag);
__attribute__((visibility("default"))) int PMPI_Free_mem(void *base);
__attribute__((visibility("default"))) int PMPI_Gather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Igather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                               void *recvbuf, int recvcount, MPI_Datatype recvtype,
                               int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Gatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, const int recvcounts[], const int displs[],
                                MPI_Datatype recvtype, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Igatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, const int recvcounts[], const int displs[],
                                MPI_Datatype recvtype, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Get_address(const void *location, MPI_Aint *address);
__attribute__((visibility("default"))) int PMPI_Get_count(const MPI_Status *status, MPI_Datatype datatype, int *count);
__attribute__((visibility("default"))) int PMPI_Get_elements(const MPI_Status *status, MPI_Datatype datatype,
                                     int *count);
__attribute__((visibility("default"))) int PMPI_Get_elements_x(const MPI_Status *status, MPI_Datatype datatype,
                                       MPI_Count *count);
__attribute__((visibility("default"))) int PMPI_Get(void *origin_addr, int origin_count,
                            MPI_Datatype origin_datatype, int target_rank,
                            MPI_Aint target_disp, int target_count,
                            MPI_Datatype target_datatype, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Get_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                       void *result_addr, int result_count, MPI_Datatype result_datatype,
                                       int target_rank, MPI_Aint target_disp, int target_count,
                                       MPI_Datatype target_datatype, MPI_Op op, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Get_library_version(char *version, int *resultlen);
__attribute__((visibility("default"))) int PMPI_Get_processor_name(char *name, int *resultlen);
__attribute__((visibility("default"))) int PMPI_Get_version(int *version, int *subversion);
__attribute__((visibility("default"))) int PMPI_Graph_create(MPI_Comm comm_old, int nnodes, const int index[],
                                     const int edges[], int reorder, MPI_Comm *comm_graph);
__attribute__((visibility("default"))) int PMPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges,
                                  int index[], int edges[]);
__attribute__((visibility("default"))) int PMPI_Graph_map(MPI_Comm comm, int nnodes, const int index[], const int edges[],
                                  int *newrank);
__attribute__((visibility("default"))) int PMPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors);
__attribute__((visibility("default"))) int PMPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors,
                                        int neighbors[]);
__attribute__((visibility("default"))) int PMPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges);
__attribute__((visibility("default"))) int PMPI_Grequest_complete(MPI_Request request);
__attribute__((visibility("default"))) int PMPI_Grequest_start(MPI_Grequest_query_function *query_fn,
                                       MPI_Grequest_free_function *free_fn,
                                       MPI_Grequest_cancel_function *cancel_fn,
                                       void *extra_state, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Group_c2f(MPI_Group group);
__attribute__((visibility("default"))) int PMPI_Group_compare(MPI_Group group1, MPI_Group group2, int *result);
__attribute__((visibility("default"))) int PMPI_Group_difference(MPI_Group group1, MPI_Group group2,
                                         MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Group_excl(MPI_Group group, int n, const int ranks[],
                                   MPI_Group *newgroup);
__attribute__((visibility("default"))) MPI_Group PMPI_Group_f2c(int group);
__attribute__((visibility("default"))) int PMPI_Group_free(MPI_Group *group);
__attribute__((visibility("default"))) int PMPI_Group_incl(MPI_Group group, int n, const int ranks[],
                                   MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Group_intersection(MPI_Group group1, MPI_Group group2,
                                           MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Group_range_excl(MPI_Group group, int n, int ranges[][3],
                                         MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Group_range_incl(MPI_Group group, int n, int ranges[][3],
                                         MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Group_rank(MPI_Group group, int *rank);
__attribute__((visibility("default"))) int PMPI_Group_size(MPI_Group group, int *size);
__attribute__((visibility("default"))) int PMPI_Group_translate_ranks(MPI_Group group1, int n, const int ranks1[],
                                              MPI_Group group2, int ranks2[]);
__attribute__((visibility("default"))) int PMPI_Group_union(MPI_Group group1, MPI_Group group2,
                                    MPI_Group *newgroup);
__attribute__((visibility("default"))) int PMPI_Ibsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Improbe(int source, int tag, MPI_Comm comm,
                                int *flag, MPI_Message *message,
                                MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Imrecv(void *buf, int count, MPI_Datatype type,
                               MPI_Message *message, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Info_c2f(MPI_Info info);
__attribute__((visibility("default"))) int PMPI_Info_create(MPI_Info *info);
__attribute__((visibility("default"))) int PMPI_Info_delete(MPI_Info info, const char *key);
__attribute__((visibility("default"))) int PMPI_Info_dup(MPI_Info info, MPI_Info *newinfo);
__attribute__((visibility("default"))) MPI_Info PMPI_Info_f2c(int info);
__attribute__((visibility("default"))) int PMPI_Info_free(MPI_Info *info);
__attribute__((visibility("default"))) int PMPI_Info_get(MPI_Info info, const char *key, int valuelen,
                                 char *value, int *flag);
__attribute__((visibility("default"))) int PMPI_Info_get_nkeys(MPI_Info info, int *nkeys);
__attribute__((visibility("default"))) int PMPI_Info_get_nthkey(MPI_Info info, int n, char *key);
__attribute__((visibility("default"))) int PMPI_Info_get_valuelen(MPI_Info info, const char *key, int *valuelen,
                                          int *flag);
__attribute__((visibility("default"))) int PMPI_Info_set(MPI_Info info, const char *key, const char *value);
__attribute__((visibility("default"))) int PMPI_Init(int *argc, char ***argv);
__attribute__((visibility("default"))) int PMPI_Initialized(int *flag);
__attribute__((visibility("default"))) int PMPI_Init_thread(int *argc, char ***argv, int required,
                                    int *provided);
__attribute__((visibility("default"))) int PMPI_Intercomm_create(MPI_Comm local_comm, int local_leader,
                                         MPI_Comm bridge_comm, int remote_leader,
                                         int tag, MPI_Comm *newintercomm);
__attribute__((visibility("default"))) int PMPI_Intercomm_merge(MPI_Comm intercomm, int high,
                                        MPI_Comm *newintercomm);
__attribute__((visibility("default"))) int PMPI_Iprobe(int source, int tag, MPI_Comm comm, int *flag,
                               MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source,
                              int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Irsend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Isend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Issend(const void *buf, int count, MPI_Datatype datatype, int dest,
                               int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Is_thread_main(int *flag);
__attribute__((visibility("default"))) int PMPI_Lookup_name(const char *service_name, MPI_Info info, char *port_name);
__attribute__((visibility("default"))) int PMPI_Message_c2f(MPI_Message message);
__attribute__((visibility("default"))) MPI_Message PMPI_Message_f2c(int message);
__attribute__((visibility("default"))) int PMPI_Mprobe(int source, int tag, MPI_Comm comm,
                               MPI_Message *message,
                               MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Mrecv(void *buf, int count, MPI_Datatype type,
                              MPI_Message *message, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Neighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ineighbor_allgather(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                            MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Neighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int displs[],
                                            MPI_Datatype recvtype, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ineighbor_allgatherv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                             void *recvbuf, const int recvcounts[], const int displs[],
                                             MPI_Datatype recvtype, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Neighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                          void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                          MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ineighbor_alltoall(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                           void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                           MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Neighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                           void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                           MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ineighbor_alltoallv(const void *sendbuf, const int sendcounts[], const int sdispls[], MPI_Datatype sendtype,
                                            void *recvbuf, const int recvcounts[], const int rdispls[], MPI_Datatype recvtype,
                                            MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Neighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                           void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                           MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ineighbor_alltoallw(const void *sendbuf, const int sendcounts[], const MPI_Aint sdispls[], const MPI_Datatype sendtypes[],
                                            void *recvbuf, const int recvcounts[], const MPI_Aint rdispls[], const MPI_Datatype recvtypes[],
                                            MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Op_c2f(MPI_Op op);
__attribute__((visibility("default"))) int PMPI_Op_commutative(MPI_Op op, int *commute);
__attribute__((visibility("default"))) int PMPI_Op_create(MPI_User_function *function, int commute, MPI_Op *op);
__attribute__((visibility("default"))) int PMPI_Open_port(MPI_Info info, char *port_name);
__attribute__((visibility("default"))) MPI_Op PMPI_Op_f2c(int op);
__attribute__((visibility("default"))) int PMPI_Op_free(MPI_Op *op);
__attribute__((visibility("default"))) int PMPI_Pack_external(const char datarep[], const void *inbuf, int incount,
                                      MPI_Datatype datatype, void *outbuf,
                                      MPI_Aint outsize, MPI_Aint *position);
__attribute__((visibility("default"))) int PMPI_Pack_external_size(const char datarep[], int incount,
                                           MPI_Datatype datatype, MPI_Aint *size);
__attribute__((visibility("default"))) int PMPI_Pack(const void *inbuf, int incount, MPI_Datatype datatype,
                             void *outbuf, int outsize, int *position, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm,
                                  int *size);
__attribute__((visibility("default"))) int PMPI_Pcontrol(const int level, ...);
__attribute__((visibility("default"))) int PMPI_Probe(int source, int tag, MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Publish_name(const char *service_name, MPI_Info info,
                                     const char *port_name);
__attribute__((visibility("default"))) int PMPI_Put(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                            int target_rank, MPI_Aint target_disp, int target_count,
                            MPI_Datatype target_datatype, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Query_thread(int *provided);
__attribute__((visibility("default"))) int PMPI_Raccumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                    int target_rank, MPI_Aint target_disp, int target_count,
                                    MPI_Datatype target_datatype, MPI_Op op, MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source,
                                  int tag, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Recv(void *buf, int count, MPI_Datatype datatype, int source,
                             int tag, MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Reduce(const void *sendbuf, void *recvbuf, int count,
                               MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ireduce(const void *sendbuf, void *recvbuf, int count,
                               MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Reduce_local(const void *inbuf, void *inoutbuf, int count,
                                     MPI_Datatype datatype, MPI_Op);
__attribute__((visibility("default"))) int PMPI_Reduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                                       MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ireduce_scatter(const void *sendbuf, void *recvbuf, const int recvcounts[],
                                        MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Reduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Ireduce_scatter_block(const void *sendbuf, void *recvbuf, int recvcount,
                                              MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Register_datarep(const char *datarep,
                                         MPI_Datarep_conversion_function *read_conversion_fn,
                                         MPI_Datarep_conversion_function *write_conversion_fn,
                                         MPI_Datarep_extent_function *dtype_file_extent_fn,
                                         void *extra_state);
__attribute__((visibility("default"))) int PMPI_Request_c2f(MPI_Request request);
__attribute__((visibility("default"))) MPI_Request PMPI_Request_f2c(int request);
__attribute__((visibility("default"))) int PMPI_Request_free(MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Request_get_status(MPI_Request request, int *flag,
                                           MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Rget(void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                             int target_rank, MPI_Aint target_disp, int target_count, MPI_Datatype target_datatype,
                             MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Rget_accumulate(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                                        void *result_addr, int result_count, MPI_Datatype result_datatype,
                                        int target_rank, MPI_Aint target_disp, int target_count,
                                        MPI_Datatype target_datatype, MPI_Op op,
                                        MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Rput(const void *origin_addr, int origin_count, MPI_Datatype origin_datatype,
                             int target_rank, MPI_Aint target_disp, int target_cout,
                             MPI_Datatype target_datatype, MPI_Win win, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Rsend(const void *ibuf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Rsend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm,
                                   MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Scan(const void *sendbuf, void *recvbuf, int count,
                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iscan(const void *sendbuf, void *recvbuf, int count,
                             MPI_Datatype datatype, MPI_Op op, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Scatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iscatter(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                void *recvbuf, int recvcount, MPI_Datatype recvtype,
                                int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Scatterv(const void *sendbuf, const int sendcounts[], const int displs[],
                                 MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, int root, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Iscatterv(const void *sendbuf, const int sendcounts[], const int displs[],
                                 MPI_Datatype sendtype, void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, int root, MPI_Comm comm, MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Send_init(const void *buf, int count, MPI_Datatype datatype,
                                  int dest, int tag, MPI_Comm comm,
                                  MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Send(const void *buf, int count, MPI_Datatype datatype, int dest,
                             int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Sendrecv(const void *sendbuf, int sendcount, MPI_Datatype sendtype,
                                 int dest, int sendtag, void *recvbuf, int recvcount,
                                 MPI_Datatype recvtype, int source, int recvtag,
                                 MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Sendrecv_replace(void * buf, int count, MPI_Datatype datatype,
                                         int dest, int sendtag, int source, int recvtag,
                                         MPI_Comm comm, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Ssend_init(const void *buf, int count, MPI_Datatype datatype,
                                   int dest, int tag, MPI_Comm comm,
                                   MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Ssend(const void *buf, int count, MPI_Datatype datatype, int dest,
                              int tag, MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Start(MPI_Request *request);
__attribute__((visibility("default"))) int PMPI_Startall(int count, MPI_Request array_of_requests[]);
__attribute__((visibility("default"))) int PMPI_Status_c2f(const MPI_Status *c_status, int *f_status);
__attribute__((visibility("default"))) int PMPI_Status_f2c(const int *f_status, MPI_Status *c_status);
__attribute__((visibility("default"))) int PMPI_Status_set_cancelled(MPI_Status *status, int flag);
__attribute__((visibility("default"))) int PMPI_Status_set_elements(MPI_Status *status, MPI_Datatype datatype,
                                            int count);
__attribute__((visibility("default"))) int PMPI_Status_set_elements_x(MPI_Status *status, MPI_Datatype datatype,
                                              MPI_Count count);
__attribute__((visibility("default"))) int PMPI_Testall(int count, MPI_Request array_of_requests[], int *flag,
                                MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Testany(int count, MPI_Request array_of_requests[], int *index, int *flag, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Test(MPI_Request *request, int *flag, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Test_cancelled(const MPI_Status *status, int *flag);
__attribute__((visibility("default"))) int PMPI_Testsome(int incount, MPI_Request array_of_requests[],
                                 int *outcount, int array_of_indices[],
                                 MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Topo_test(MPI_Comm comm, int *status);
__attribute__((visibility("default"))) int PMPI_Type_c2f(MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_Type_commit(MPI_Datatype *type);
__attribute__((visibility("default"))) int PMPI_Type_contiguous(int count, MPI_Datatype oldtype,
                                        MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_darray(int size, int rank, int ndims,
                                           const int gsize_array[], const int distrib_array[],
                                           const int darg_array[], const int psize_array[],
                                           int order, MPI_Datatype oldtype,
                                           MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_complex(int p, int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_integer(int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_f90_real(int p, int r, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_hindexed(int count, const int array_of_blocklengths[],
                                             const MPI_Aint array_of_displacements[],
                                             MPI_Datatype oldtype,
                                             MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_hvector(int count, int blocklength, MPI_Aint stride,
                                            MPI_Datatype oldtype,
                                            MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_keyval(MPI_Type_copy_attr_function *type_copy_attr_fn,
                                           MPI_Type_delete_attr_function *type_delete_attr_fn,
                                           int *type_keyval, void *extra_state);
__attribute__((visibility("default"))) int PMPI_Type_create_hindexed_block(int count, int blocklength,
                                                   const MPI_Aint array_of_displacements[],
                                                   MPI_Datatype oldtype,
                                                   MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_indexed_block(int count, int blocklength,
                                                  const int array_of_displacements[],
                                                  MPI_Datatype oldtype,
                                                  MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_struct(int count, const int array_of_block_lengths[],
                                           const MPI_Aint array_of_displacements[],
                                           const MPI_Datatype array_of_types[],
                                           MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_subarray(int ndims, const int size_array[], const int subsize_array[],
                                             const int start_array[], int order,
                                             MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_create_resized(MPI_Datatype oldtype, MPI_Aint lb,
                                            MPI_Aint extent, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_delete_attr(MPI_Datatype type, int type_keyval);
__attribute__((visibility("default"))) int PMPI_Type_dup(MPI_Datatype type, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_free(MPI_Datatype *type);
__attribute__((visibility("default"))) int PMPI_Type_free_keyval(int *type_keyval);
__attribute__((visibility("default"))) MPI_Datatype PMPI_Type_f2c(int datatype);
__attribute__((visibility("default"))) int PMPI_Type_get_attr(MPI_Datatype type, int type_keyval,
                                      void *attribute_val, int *flag);
__attribute__((visibility("default"))) int PMPI_Type_get_contents(MPI_Datatype mtype, int max_integers,
                                          int max_addresses, int max_datatypes,
                                          int array_of_integers[],
                                          MPI_Aint array_of_addresses[],
                                          MPI_Datatype array_of_datatypes[]);
__attribute__((visibility("default"))) int PMPI_Type_get_envelope(MPI_Datatype type, int *num_integers,
                                          int *num_addresses, int *num_datatypes,
                                          int *combiner);
__attribute__((visibility("default"))) int PMPI_Type_get_extent(MPI_Datatype type, MPI_Aint *lb,
                                        MPI_Aint *extent);
__attribute__((visibility("default"))) int PMPI_Type_get_extent_x(MPI_Datatype type, MPI_Count *lb,
                                          MPI_Count *extent);
__attribute__((visibility("default"))) int PMPI_Type_get_name(MPI_Datatype type, char *type_name,
                                      int *resultlen);
__attribute__((visibility("default"))) int PMPI_Type_get_true_extent(MPI_Datatype datatype, MPI_Aint *true_lb,
                                             MPI_Aint *true_extent);
__attribute__((visibility("default"))) int PMPI_Type_get_true_extent_x(MPI_Datatype datatype, MPI_Count *true_lb,
                                               MPI_Count *true_extent);
__attribute__((visibility("default"))) int PMPI_Type_indexed(int count, const int array_of_blocklengths[],
                                     const int array_of_displacements[],
                                     MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Type_match_size(int typeclass, int size, MPI_Datatype *type);
__attribute__((visibility("default"))) int PMPI_Type_set_attr(MPI_Datatype type, int type_keyval,
                                      void *attr_val);
__attribute__((visibility("default"))) int PMPI_Type_set_name(MPI_Datatype type, const char *type_name);
__attribute__((visibility("default"))) int PMPI_Type_size(MPI_Datatype type, int *size);
__attribute__((visibility("default"))) int PMPI_Type_size_x(MPI_Datatype type, MPI_Count *size);
__attribute__((visibility("default"))) int PMPI_Type_vector(int count, int blocklength, int stride,
                                    MPI_Datatype oldtype, MPI_Datatype *newtype);
__attribute__((visibility("default"))) int PMPI_Unpack(const void *inbuf, int insize, int *position,
                               void *outbuf, int outcount, MPI_Datatype datatype,
                               MPI_Comm comm);
__attribute__((visibility("default"))) int PMPI_Unpublish_name(const char *service_name, MPI_Info info,
                                       const char *port_name);
__attribute__((visibility("default"))) int PMPI_Unpack_external (const char datarep[], const void *inbuf, MPI_Aint insize,
                                         MPI_Aint *position, void *outbuf, int outcount,
                                         MPI_Datatype datatype);
__attribute__((visibility("default"))) int PMPI_Waitall(int count, MPI_Request array_of_requests[],
                                MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Waitany(int count, MPI_Request array_of_requests[],
                                int *index, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Wait(MPI_Request *request, MPI_Status *status);
__attribute__((visibility("default"))) int PMPI_Waitsome(int incount, MPI_Request array_of_requests[],
                                 int *outcount, int array_of_indices[],
                                 MPI_Status array_of_statuses[]);
__attribute__((visibility("default"))) int PMPI_Win_allocate(MPI_Aint size, int disp_unit, MPI_Info info,
                                     MPI_Comm comm, void *baseptr, MPI_Win *win);
__attribute__((visibility("default"))) int PMPI_Win_allocate_shared(MPI_Aint size, int disp_unit, MPI_Info info,
                                            MPI_Comm comm, void *baseptr, MPI_Win *win);
__attribute__((visibility("default"))) int PMPI_Win_attach(MPI_Win win, void *base, MPI_Aint size);
__attribute__((visibility("default"))) int PMPI_Win_c2f(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_call_errhandler(MPI_Win win, int errorcode);
__attribute__((visibility("default"))) int PMPI_Win_complete(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_create(void *base, MPI_Aint size, int disp_unit,
                                   MPI_Info info, MPI_Comm comm, MPI_Win *win);
__attribute__((visibility("default"))) int PMPI_Win_create_dynamic(MPI_Info info, MPI_Comm comm, MPI_Win *win);
__attribute__((visibility("default"))) int PMPI_Win_create_errhandler(MPI_Win_errhandler_function *function,
                                              MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_Win_create_keyval(MPI_Win_copy_attr_function *win_copy_attr_fn,
                                          MPI_Win_delete_attr_function *win_delete_attr_fn,
                                          int *win_keyval, void *extra_state);
__attribute__((visibility("default"))) int PMPI_Win_delete_attr(MPI_Win win, int win_keyval);
__attribute__((visibility("default"))) int PMPI_Win_detach(MPI_Win win, const void *base);
__attribute__((visibility("default"))) MPI_Win PMPI_Win_f2c(int win);
__attribute__((visibility("default"))) int PMPI_Win_fence(int assert, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_flush(int rank, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_flush_all(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_flush_local(int rank, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_flush_local_all(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_free(MPI_Win *win);
__attribute__((visibility("default"))) int PMPI_Win_free_keyval(int *win_keyval);
__attribute__((visibility("default"))) int PMPI_Win_get_attr(MPI_Win win, int win_keyval,
                                     void *attribute_val, int *flag);
__attribute__((visibility("default"))) int PMPI_Win_get_errhandler(MPI_Win win, MPI_Errhandler *errhandler);
__attribute__((visibility("default"))) int PMPI_Win_get_group(MPI_Win win, MPI_Group *group);
__attribute__((visibility("default"))) int PMPI_Win_get_info(MPI_Win win, MPI_Info *info_used);
__attribute__((visibility("default"))) int PMPI_Win_get_name(MPI_Win win, char *win_name, int *resultlen);
__attribute__((visibility("default"))) int PMPI_Win_lock(int lock_type, int rank, int assert, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_lock_all(int assert, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_post(MPI_Group group, int assert, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_set_attr(MPI_Win win, int win_keyval, void *attribute_val);
__attribute__((visibility("default"))) int PMPI_Win_set_errhandler(MPI_Win win, MPI_Errhandler errhandler);
__attribute__((visibility("default"))) int PMPI_Win_set_info(MPI_Win win, MPI_Info info);
__attribute__((visibility("default"))) int PMPI_Win_set_name(MPI_Win win, const char *win_name);
__attribute__((visibility("default"))) int PMPI_Win_shared_query(MPI_Win win, int rank, MPI_Aint *size, int *disp_unit, void *baseptr);
__attribute__((visibility("default"))) int PMPI_Win_start(MPI_Group group, int assert, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_sync(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_test(MPI_Win win, int *flag);
__attribute__((visibility("default"))) int PMPI_Win_unlock(int rank, MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_unlock_all(MPI_Win win);
__attribute__((visibility("default"))) int PMPI_Win_wait(MPI_Win win);
__attribute__((visibility("default"))) double PMPI_Wtick(void);
__attribute__((visibility("default"))) double PMPI_Wtime(void);
__attribute__((visibility("default"))) int PMPI_T_init_thread (int required, int *provided);
__attribute__((visibility("default"))) int PMPI_T_finalize (void);
__attribute__((visibility("default"))) int PMPI_T_cvar_get_num (int *num_cvar);
__attribute__((visibility("default"))) int PMPI_T_cvar_get_info (int cvar_index, char *name, int *name_len,
                                         int *verbosity, MPI_Datatype *datatype,
                                         MPI_T_enum *enumtype, char *desc,
                                         int *desc_len, int *bind, int *scope);
__attribute__((visibility("default"))) int PMPI_T_cvar_get_index (const char *name, int *cvar_index);
__attribute__((visibility("default"))) int PMPI_T_cvar_handle_alloc (int cvar_index, void *obj_handle,
                                            MPI_T_cvar_handle *handle, int *count);
__attribute__((visibility("default"))) int PMPI_T_cvar_handle_free (MPI_T_cvar_handle *handle);
__attribute__((visibility("default"))) int PMPI_T_cvar_read (MPI_T_cvar_handle handle, void *buf);
__attribute__((visibility("default"))) int PMPI_T_cvar_write (MPI_T_cvar_handle handle, const void *buf);
__attribute__((visibility("default"))) int PMPI_T_category_get_num(int *num_cat);
__attribute__((visibility("default"))) int PMPI_T_category_get_info(int cat_index, char *name, int *name_len,
                                            char *desc, int *desc_len, int *num_cvars,
                                            int *num_pvars, int *num_categories);
__attribute__((visibility("default"))) int PMPI_T_category_get_index (const char *name, int *category_index);
__attribute__((visibility("default"))) int PMPI_T_category_get_cvars(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int PMPI_T_category_get_pvars(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int PMPI_T_category_get_categories(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int PMPI_T_category_changed(int *stamp);

__attribute__((visibility("default"))) int PMPI_T_pvar_get_num(int *num_pvar);
__attribute__((visibility("default"))) int PMPI_T_pvar_get_info(int pvar_index, char *name, int *name_len,
                                        int *verbosity, int *var_class, MPI_Datatype *datatype,
                                        MPI_T_enum *enumtype, char *desc, int *desc_len, int *bind,
                                        int *readonly, int *continuous, int *atomic);
__attribute__((visibility("default"))) int PMPI_T_pvar_get_index (const char *name, int var_class, int *pvar_index);
__attribute__((visibility("default"))) int PMPI_T_pvar_session_create(MPI_T_pvar_session *session);
__attribute__((visibility("default"))) int PMPI_T_pvar_session_free(MPI_T_pvar_session *session);
__attribute__((visibility("default"))) int PMPI_T_pvar_handle_alloc(MPI_T_pvar_session session, int pvar_index,
                                            void *obj_handle, MPI_T_pvar_handle *handle, int *count);
__attribute__((visibility("default"))) int PMPI_T_pvar_handle_free(MPI_T_pvar_session session, MPI_T_pvar_handle *handle);
__attribute__((visibility("default"))) int PMPI_T_pvar_start(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int PMPI_T_pvar_stop(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int PMPI_T_pvar_read(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                    void *buf);
__attribute__((visibility("default"))) int PMPI_T_pvar_write(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                     const void *buf);
__attribute__((visibility("default"))) int PMPI_T_pvar_reset(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int PMPI_T_pvar_readreset(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                         void *buf);
__attribute__((visibility("default"))) int PMPI_T_enum_get_info(MPI_T_enum enumtype, int *num, char *name, int *name_len);
__attribute__((visibility("default"))) int PMPI_T_enum_get_item(MPI_T_enum enumtype, int index, int *value, char *name,
                                        int *name_len);




__attribute__((visibility("default"))) int MPI_T_init_thread (int required, int *provided);
__attribute__((visibility("default"))) int MPI_T_finalize (void);
__attribute__((visibility("default"))) int MPI_T_cvar_get_num (int *num_cvar);
__attribute__((visibility("default"))) int MPI_T_cvar_get_info (int cvar_index, char *name, int *name_len,
                                        int *verbosity, MPI_Datatype *datatype,
                                        MPI_T_enum *enumtype, char *desc,
                                        int *desc_len, int *bind, int *scope);
__attribute__((visibility("default"))) int MPI_T_cvar_get_index (const char *name, int *cvar_index);
__attribute__((visibility("default"))) int MPI_T_cvar_handle_alloc (int cvar_index, void *obj_handle,
                                            MPI_T_cvar_handle *handle, int *count);
__attribute__((visibility("default"))) int MPI_T_cvar_handle_free (MPI_T_cvar_handle *handle);
__attribute__((visibility("default"))) int MPI_T_cvar_read (MPI_T_cvar_handle handle, void *buf);
__attribute__((visibility("default"))) int MPI_T_cvar_write (MPI_T_cvar_handle handle, const void *buf);
__attribute__((visibility("default"))) int MPI_T_category_get_num(int *num_cat);
__attribute__((visibility("default"))) int MPI_T_category_get_info(int cat_index, char *name, int *name_len,
                                           char *desc, int *desc_len, int *num_cvars,
                                           int *num_pvars, int *num_categories);
__attribute__((visibility("default"))) int MPI_T_category_get_index (const char *name, int *category_index);
__attribute__((visibility("default"))) int MPI_T_category_get_cvars(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int MPI_T_category_get_pvars(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int MPI_T_category_get_categories(int cat_index, int len, int indices[]);
__attribute__((visibility("default"))) int MPI_T_category_changed(int *stamp);

__attribute__((visibility("default"))) int MPI_T_pvar_get_num(int *num_pvar);
__attribute__((visibility("default"))) int MPI_T_pvar_get_info(int pvar_index, char *name, int *name_len,
                                       int *verbosity, int *var_class, MPI_Datatype *datatype,
                                       MPI_T_enum *enumtype, char *desc, int *desc_len, int *bind,
                                       int *readonly, int *continuous, int *atomic);
__attribute__((visibility("default"))) int MPI_T_pvar_get_index (const char *name, int var_class, int *pvar_index);
__attribute__((visibility("default"))) int MPI_T_pvar_session_create(MPI_T_pvar_session *session);
__attribute__((visibility("default"))) int MPI_T_pvar_session_free(MPI_T_pvar_session *session);
__attribute__((visibility("default"))) int MPI_T_pvar_handle_alloc(MPI_T_pvar_session session, int pvar_index,
                                           void *obj_handle, MPI_T_pvar_handle *handle, int *count);
__attribute__((visibility("default"))) int MPI_T_pvar_handle_free(MPI_T_pvar_session session, MPI_T_pvar_handle *handle);
__attribute__((visibility("default"))) int MPI_T_pvar_start(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int MPI_T_pvar_stop(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int MPI_T_pvar_read(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                   void *buf);
__attribute__((visibility("default"))) int MPI_T_pvar_write(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                    const void *buf);
__attribute__((visibility("default"))) int MPI_T_pvar_reset(MPI_T_pvar_session session, MPI_T_pvar_handle handle);
__attribute__((visibility("default"))) int MPI_T_pvar_readreset(MPI_T_pvar_session session, MPI_T_pvar_handle handle,
                                        void *buf);
__attribute__((visibility("default"))) int MPI_T_enum_get_info(MPI_T_enum enumtype, int *num, char *name, int *name_len);
__attribute__((visibility("default"))) int MPI_T_enum_get_item(MPI_T_enum enumtype, int index, int *value, char *name,
                                       int *name_len);




__attribute__((visibility("default"))) int MPI_Attr_delete(MPI_Comm comm, int keyval)
            ;
__attribute__((visibility("default"))) int PMPI_Attr_delete(MPI_Comm comm, int keyval)
            ;
__attribute__((visibility("default"))) int MPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag)
            ;
__attribute__((visibility("default"))) int PMPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag)
            ;
__attribute__((visibility("default"))) int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
            ;
__attribute__((visibility("default"))) int PMPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val)
            ;







typedef int (MPI_Copy_function)(MPI_Comm, int, void *,
                                void *, void *, int *);

typedef int (MPI_Delete_function)(MPI_Comm, int, void *, void *);

__attribute__((visibility("default"))) int MPI_Keyval_create(MPI_Copy_function *copy_fn,
                                     MPI_Delete_function *delete_fn,
                                     int *keyval, void *extra_state)
            ;
__attribute__((visibility("default"))) int PMPI_Keyval_create(MPI_Copy_function *copy_fn,
                                      MPI_Delete_function *delete_fn,
                                      int *keyval, void *extra_state)
            ;
__attribute__((visibility("default"))) int MPI_Keyval_free(int *keyval)
            ;
__attribute__((visibility("default"))) int PMPI_Keyval_free(int *keyval)
            ;




__attribute__((visibility("default"))) int OMPI_C_MPI_DUP_FN( MPI_Comm comm, int comm_keyval,
                                     void* extra_state,
                                     void* attribute_val_in,
                                     void* attribute_val_out,
                                     int* flag )
            ;




__attribute__((visibility("default"))) int OMPI_C_MPI_NULL_COPY_FN( MPI_Comm comm, int comm_keyval,
                                           void* extra_state,
                                           void* attribute_val_in,
                                           void* attribute_val_out,
                                           int* flag )
            ;




__attribute__((visibility("default"))) int OMPI_C_MPI_NULL_DELETE_FN( MPI_Comm comm, int comm_keyval,
                                             void* attribute_val_out,
                                             void* extra_state )
            ;
# 2794 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
typedef void (MPI_Handler_function)(MPI_Comm *, int *, ...);
# 2804 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
__attribute__((visibility("default"))) int MPI_Address(void *location, MPI_Aint *address)
                   ;
__attribute__((visibility("default"))) int PMPI_Address(void *location, MPI_Aint *address)
                   ;
__attribute__((visibility("default"))) int MPI_Errhandler_create(MPI_Handler_function *function,
                                         MPI_Errhandler *errhandler)
                   ;
__attribute__((visibility("default"))) int PMPI_Errhandler_create(MPI_Handler_function *function,
                                          MPI_Errhandler *errhandler)
                   ;
__attribute__((visibility("default"))) int MPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler)
                   ;
__attribute__((visibility("default"))) int PMPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler)
                   ;
__attribute__((visibility("default"))) int MPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler)
                   ;
__attribute__((visibility("default"))) int PMPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler)
                   ;
__attribute__((visibility("default"))) int MPI_Type_extent(MPI_Datatype type, MPI_Aint *extent)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_extent(MPI_Datatype type, MPI_Aint *extent)
                   ;
__attribute__((visibility("default"))) int MPI_Type_hindexed(int count, int array_of_blocklengths[],
                                     MPI_Aint array_of_displacements[],
                                     MPI_Datatype oldtype, MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_hindexed(int count, int array_of_blocklengths[],
                                      MPI_Aint array_of_displacements[],
                                      MPI_Datatype oldtype, MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int MPI_Type_hvector(int count, int blocklength, MPI_Aint stride,
                                    MPI_Datatype oldtype, MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_hvector(int count, int blocklength, MPI_Aint stride,
                                     MPI_Datatype oldtype, MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int MPI_Type_lb(MPI_Datatype type, MPI_Aint *lb)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_lb(MPI_Datatype type, MPI_Aint *lb)
                   ;
__attribute__((visibility("default"))) int MPI_Type_struct(int count, int array_of_blocklengths[],
                                   MPI_Aint array_of_displacements[],
                                   MPI_Datatype array_of_types[],
                                   MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_struct(int count, int array_of_blocklengths[],
                                    MPI_Aint array_of_displacements[],
                                    MPI_Datatype array_of_types[],
                                    MPI_Datatype *newtype)
                   ;
__attribute__((visibility("default"))) int MPI_Type_ub(MPI_Datatype mtype, MPI_Aint *ub)
                   ;
__attribute__((visibility("default"))) int PMPI_Type_ub(MPI_Datatype mtype, MPI_Aint *ub)
                   ;
# 2874 "/tmp/hpcx-2.8.1/ompi/include/mpi.h"
}
# 36 "input.cpp" 2

# 1 "ljs.h" 1
# 35 "ljs.h"
# 1 "types.h" 1
# 35 "types.h"
enum ForceStyle {FORCELJ, FORCEEAM};


struct double2 {
  double x, y;
};
struct float2 {
  float x, y;
};
struct double4 {
  double x, y, z, w;
};
struct float4 {
  float x, y, z, w;
};
# 69 "types.h"
typedef double MMD_float;
typedef double2 MMD_float2;
typedef double4 MMD_float4;

typedef int MMD_int;
typedef int MMD_bigint;
# 36 "ljs.h" 2

struct In {
  int nx, ny, nz;
  MMD_float t_request;
  MMD_float rho;
  int units;
  ForceStyle forcetype;
  MMD_float epsilon, sigma;
  char* datafile;
  int ntimes;
  MMD_float dt;
  int neigh_every;
  MMD_float force_cut;
  MMD_float neigh_cut;
  int thermo_nstat;
};
# 38 "input.cpp" 2
# 1 "atom.h" 1
# 35 "atom.h"
# 1 "threadData.h" 1
# 35 "threadData.h"
class ThreadData
{
  public:
    ThreadData() {
      mpi_me = 0;
      mpi_num_threads = 0;
      omp_me = 0;
      omp_num_threads = 1;
      teams = 1;
    };
    ~ThreadData() {};
    int mpi_me;
    int mpi_num_threads;
    int omp_me;
    int omp_num_threads;
    int teams;
};
# 36 "atom.h" 2



class Neighbor;
struct Box {
  MMD_float xprd, yprd, zprd;
  MMD_float xlo, xhi;
  MMD_float ylo, yhi;
  MMD_float zlo, zhi;
};

class Atom
{
  public:
    int natoms;
    int nlocal, nghost;
    int nmax;

    MMD_float* x;
    MMD_float* v;
    MMD_float* f;


    int ntypes;
    int* type;


    int* sorted_index;

    MMD_float* xold;

    ThreadData* threads;
    MMD_float virial, mass;

    int comm_size, reverse_size, border_size;

    struct Box box;

    Atom(int ntypes_);
    ~Atom();
    void addatom(MMD_float, MMD_float, MMD_float, MMD_float, MMD_float, MMD_float);
    void pbc();
    void growarray();

    void copy(int, int);

    void pack_comm(int, int*, MMD_float*, int*);
    void unpack_comm(int, int, MMD_float*);
    void pack_reverse(int, int, MMD_float*);
    void unpack_reverse(int, int*, MMD_float*);

    int pack_border(int, MMD_float*, int*);
    int unpack_border(int, MMD_float*);
    int pack_exchange(int, MMD_float*);
    int unpack_exchange(int, MMD_float*);
    int skip_exchange(MMD_float*);



    int pack_exchange_bf(int, MMD_float*);
    int unpack_exchange_bf(int, MMD_float*);
    void copy_bf(int, int);
    void sort_bf();

    MMD_float* realloc_2d_MMD_float_array(MMD_float*, int, int, int);
    MMD_float* create_2d_MMD_float_array(int, int);
    void destroy_2d_MMD_float_array(MMD_float*);

    int* realloc_1d_int_array(int*, int, int);
    int* create_1d_int_array(int);
    void destroy_1d_int_array(int*);

    void sort(Neighbor & neighbor);

  private:
    int* binpos;
    int* bins;
    MMD_float* x_copy;
    MMD_float* v_copy;
    MMD_float* f_copy;
    int* type_copy;
    int copy_size;
};
# 39 "input.cpp" 2
# 1 "force.h" 1
# 37 "force.h"
# 1 "neighbor.h" 1
# 37 "neighbor.h"
# 1 "timer.h" 1
# 43 "timer.h"
# 1 "/usr/include/c++/8/ctime" 1 3
# 39 "/usr/include/c++/8/ctime" 3
       
# 40 "/usr/include/c++/8/ctime" 3


# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/aarch64-redhat-linux/8/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 73 "/usr/include/bits/time.h" 3 4
# 1 "/usr/include/bits/timex.h" 1 3 4
# 26 "/usr/include/bits/timex.h" 3 4

# 26 "/usr/include/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 74 "/usr/include/bits/time.h" 2 3 4

extern "C" {


extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) throw ();

}
# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4
extern "C" {



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) throw ();




extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     throw ();






extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) throw ();



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) throw ();





extern struct tm *gmtime (const time_t *__timer) throw ();



extern struct tm *localtime (const time_t *__timer) throw ();




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();




extern char *asctime (const struct tm *__tp) throw ();


extern char *ctime (const time_t *__timer) throw ();






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) throw ();
# 196 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 211 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();





extern int timespec_get (struct timespec *__ts, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 280 "/usr/include/time.h" 3 4
extern int getdate_err;
# 289 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 303 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 43 "/usr/include/c++/8/ctime" 2 3
# 58 "/usr/include/c++/8/ctime" 3
namespace std
{
  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;
}
# 44 "timer.h" 2

# 1 "bf_comm.h" 1



# 3 "bf_comm.h"
extern char name[256];
extern MPI_Comm hosts_communicator;
extern MPI_Comm nic_host_communicator;
extern int isHost;
extern int x_is_ready;

extern MPI_Win win_numneigh;
extern MPI_Win win_neighbors;
extern MPI_Win win_x;
extern MPI_Win win_type;
extern MPI_Win win_f;
extern MPI_Win win_sorted_index;
# 46 "timer.h" 2

class Timer
{
  public:
    Timer();
    ~Timer();
    void stamp();
    void stamp(int);
    void stamp_extra_start();
    void stamp_extra_stop(int);
    void barrier_start(int);
    void barrier_stop(int);
    double* array;

  private:



    double previous_time_d, previous_time_extra_d;

};
# 38 "neighbor.h" 2

class Neighbor
{
  public:
    int every;
    int nbinx, nbiny, nbinz;
    MMD_float cutneigh;
    MMD_float* cutneighsq;
    int ncalls;
    int max_totalneigh;

    int* numneigh;
    int* neighbors;
    int maxneighs;
    int halfneigh;

    MMD_int ghost_newton;
    int count;
    Neighbor(int ntypes_);
    ~Neighbor();
    int setup(Atom &);
    void build(Atom &);


    void growneigh(int);
    int getnmax();
    Timer* timer;

    ThreadData* threads;


    void binatoms(Atom & atom, int count = -1);

    int* bincount;
    int* bins;
    int mbins;
    int atoms_per_bin;
  private:
    MMD_float xprd, yprd, zprd;

    int nmax;
    int ntypes;

    int nstencil;
    int* stencil;

    int mbinx, mbiny, mbinz;
    int mbinxlo, mbinylo, mbinzlo;
    MMD_float binsizex, binsizey, binsizez;
    MMD_float bininvx, bininvy, bininvz;

    int resize;

    MMD_float bindist(int, int, int);
    int coord2bin(MMD_float, MMD_float, MMD_float);
};
# 38 "force.h" 2
# 1 "comm.h" 1
# 40 "comm.h"
# 1 "bf_comm.h" 1


extern char name[256];
extern MPI_Comm hosts_communicator;
extern MPI_Comm nic_host_communicator;
extern int isHost;
extern int x_is_ready;

extern MPI_Win win_numneigh;
extern MPI_Win win_neighbors;
extern MPI_Win win_x;
extern MPI_Win win_type;
extern MPI_Win win_f;
extern MPI_Win win_sorted_index;
# 41 "comm.h" 2

class Comm
{
  public:
    Comm();
    ~Comm();
    int setup(MMD_float, Atom &);
    void communicate(Atom &);
    void reverse_communicate(Atom &);
    void exchange(Atom &);
    void exchange_all(Atom &);
    void borders(Atom &);
    void growsend(int);
    void growrecv(int);
    void growlist(int, int);


    void exchange_bf(Atom &);

  public:
    int me;
    int nswap;
    int* pbc_any;
    int* pbc_flagx;
    int* pbc_flagy;
    int* pbc_flagz;
    int* sendnum, *recvnum;
    int* comm_send_size;
    int* comm_recv_size;
    int* reverse_send_size;
    int* reverse_recv_size;
    int* sendproc, *recvproc;
    int* sendproc_exc, *recvproc_exc;

    int* firstrecv;
    int** sendlist;
    int* maxsendlist;

    MMD_float* buf_send;
    MMD_float* buf_recv;
    MMD_float* buf;
    int maxsend;
    int maxrecv;

    int procneigh[3][2];
    int procgrid[3];
    int need[3];
    MMD_float* slablo, *slabhi;

    ThreadData* threads;

    int check_safeexchange;
    int do_safeexchange;
    Timer* timer;

    int copy_size;
    int* nsend_thread;
    int* nrecv_thread;
    int* nholes_thread;
    int** exc_sendlist_thread;
    int* send_flag;
    int* maxsend_thread;
    int maxthreads;
    int maxnlocal;
    int nrecv_atoms;

};
# 39 "force.h" 2

class Force
{
  public:
    MMD_float cutforce;
    MMD_float* cutforcesq;
    MMD_float eng_vdwl;
    MMD_float mass;
    MMD_int evflag;
    MMD_float virial;
    int ntypes;

    Force() {};
    virtual ~Force() {};
    virtual void setup() {};
    virtual void finalise() {};
    virtual void compute(Atom &, Neighbor &, Comm &, int) {};

    int use_sse;
    int use_oldcompute;
    ThreadData* threads;
    MMD_int reneigh;
    Timer* timer;

    MMD_float *epsilon, *sigma6, *sigma;

    ForceStyle style;
  protected:

    MMD_int me;
};
# 40 "input.cpp" 2

# 1 "integrate.h" 1
# 36 "integrate.h"
# 1 "thermo.h" 1
# 35 "thermo.h"
enum units {LJ, METAL};
# 44 "thermo.h"
class Integrate;

class Thermo
{
  public:
    MMD_int nstat;
    MMD_int mstat;
    MMD_int ntimes;
    MMD_int* steparr;
    MMD_float* tmparr;
    MMD_float* engarr;
    MMD_float* prsarr;

    Thermo();
    ~Thermo();
    void setup(MMD_float, Integrate &integrate, Atom &atom, MMD_int);
    MMD_float temperature(Atom &);
    MMD_float energy(Atom &, Neighbor &, Force*);
    MMD_float pressure(MMD_float, Force*);
    void compute(MMD_int, Atom &, Neighbor &, Force*, Timer &, Comm &);

    MMD_float t_act, p_act, e_act;
    MMD_float t_scale, e_scale, p_scale, mvv2e, dof_boltz;

    ThreadData* threads;
  private:
    MMD_float rho;
};
# 37 "integrate.h" 2



class Integrate
{
  public:
    MMD_float dt;
    MMD_float dtforce;
    MMD_int ntimes;
    MMD_int nlocal, nmax;
    MMD_float* x, *v, *f, *xold;
    MMD_float mass;

    MMD_int sort_every;

    Integrate();
    ~Integrate();
    void setup();
    void initialIntegrate(int);
    void finalIntegrate();
    void run(Atom &, Force*, Neighbor &, Comm &, Thermo &, Timer &);

    ThreadData* threads;
};
# 42 "input.cpp" 2





int input(In &in, const char* filename)
{
  FILE* fp;
  int flag;
  char line[256];

  int me;
  MPI_Comm_rank((static_cast<MPI_Comm> (static_cast<void *> (&(ompi_mpi_comm_world)))), &me);

  fp = fopen(filename, "r");

  if(fp == 
# 58 "input.cpp" 3 4
          __null
# 58 "input.cpp"
              ) flag = 0;
  else flag = 1;

  if(flag == 0) {
    if(me == 0) printf("ERROR: Cannot open %s\n", filename);

    return 1;
  }
# 123 "input.cpp"
      fgets(line, 256, fp);
      fgets(line, 256, fp);
      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "lj") == 0) in.units = 0;
      else if(strcmp(line, "metal") == 0) in.units = 1;
      else {
        printf("Unknown units option in file at line 3 ('%s'). Expecting either 'lj' or 'metal'.\n", line);
        MPI_Finalize();
        exit(0);
      }

      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "none") == 0) in.datafile = 
# 137 "input.cpp" 3 4
                                                                  __null
# 137 "input.cpp"
                                                                      ;
      else {
        in.datafile = new char[1000];
        char* ptr = strtok(line, " \t");

        if(ptr == 
# 142 "input.cpp" 3 4
                 __null
# 142 "input.cpp"
                     ) ptr = line;

        strcpy(in.datafile, ptr);
      }

      fgets(line, 256, fp);

      if(strcmp(strtok(line, " \t\n"), "lj") == 0) in.forcetype = FORCELJ;
      else if(strcmp(line, "eam") == 0) in.forcetype = FORCEEAM;
      else {
        printf("Unknown forcetype option in file at line 5 ('%s'). Expecting either 'lj' or 'eam'.\n", line);
        MPI_Finalize();
        exit(0);
      }

      fgets(line, 256, fp);
      sscanf(line, "%le %le", &in.epsilon, &in.sigma);
      fgets(line, 256, fp);
      sscanf(line, "%d %d %d", &in.nx, &in.ny, &in.nz);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.ntimes);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.dt);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.t_request);
      fgets(line, 256, fp);
      sscanf(line, "%le", &in.rho);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.neigh_every);
      fgets(line, 256, fp);
      sscanf(line, "%le %le", &in.force_cut, &in.neigh_cut);
      fgets(line, 256, fp);
      sscanf(line, "%d", &in.thermo_nstat);
      fclose(fp);






  in.neigh_cut += in.force_cut;
  MPI_Barrier((static_cast<MPI_Comm> (static_cast<void *> (&(ompi_mpi_comm_world)))));

  return 0;
}
