/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

namespace UTBot {
#define typeid typeid_
#define throw throw_
#define true true_
#define thread_local thread_local_
#define template template_
#define static_cast static_cast_
#define requires requires_
#define public public_
#define protected protected_
#define reflexpr reflexpr_
#define operator operator_
#define noexcept noexcept_
#define new new_
#define namespace namespace_
#define mutable mutable_
#define try try_
#define private private_
#define friend friend_
#define false false_
#define virtual virtual_
#define nullptr nullptr_
#define export export_
#define this this_
#define explicit explicit_
#define typename typename_
#define delete delete_
#define decltype decltype_
#define co_yield co_yield_
#define co_return co_return_
#define co_await co_await_
#define const_cast const_cast_
#define constinit constinit_
#define consteval consteval_
#define class class_
#define synchronized synchronized_
#define char32_t char32_t_
#define constexpr constexpr_
#define char8_t char8_t_
#define catch catch_
#define using using_
#define char16_t char16_t_
#define atomic_noexcept atomic_noexcept_
#define concept concept_
#define atomic_commit atomic_commit_
#define static_assert static_assert_
#define atomic_cancel atomic_cancel_
#define dynamic_cast dynamic_cast_
#define asm asm_
#define reinterpret_cast reinterpret_cast_
#define alignof alignof_
#define alignas alignas_
#define _Alignas(x)
#define _Atomic(x) x
#define _Bool bool
#define _Noreturn
#define _Thread_local thread_local

typedef unsigned char __u_char;

typedef unsigned short __u_short;

typedef unsigned int __u_int;

typedef unsigned long __u_long;

typedef signed char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long __int64_t;

typedef unsigned long __uint64_t;

typedef long __quad_t;

typedef unsigned long __u_quad_t;

typedef long __intmax_t;

typedef unsigned long __uintmax_t;

typedef unsigned long __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long __ino_t;

typedef unsigned long __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long __nlink_t;

typedef long __off_t;

typedef long __off64_t;

typedef int __pid_t;

typedef struct {
    int __val[2];
} __fsid_t;

typedef long __clock_t;

typedef unsigned long __rlim_t;

typedef unsigned long __rlim64_t;

typedef unsigned int __id_t;

typedef long __time_t;

typedef unsigned int __useconds_t;

typedef long __suseconds_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef long __blkcnt64_t;

typedef unsigned long __fsblkcnt_t;

typedef unsigned long __fsblkcnt64_t;

typedef unsigned long __fsfilcnt_t;

typedef unsigned long __fsfilcnt64_t;

typedef long __fsword_t;

typedef long __ssize_t;

typedef long __syscall_slong_t;

typedef unsigned long __syscall_ulong_t;

typedef __off64_t __loff_t;

typedef char *__caddr_t;

typedef long __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef __sig_atomic_t sig_atomic_t;

typedef struct {
    unsigned long __val[16];
} __sigset_t;

typedef __sigset_t sigset_t;

typedef __pid_t pid_t;

typedef __uid_t uid_t;

struct timespec {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
};

union sigval {
    int sival_int;
    void *sival_ptr;
};

typedef union sigval __sigval_t;

typedef struct {
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union {
        int _pad[28];
        struct {
            __pid_t si_pid;
            __uid_t si_uid;
        } _kill;
        struct {
            int si_tid;
            int si_overrun;
            __sigval_t si_sigval;
        } _timer;
        struct {
            __pid_t si_pid;
            __uid_t si_uid;
            __sigval_t si_sigval;
        } _rt;
        struct {
            __pid_t si_pid;
            __uid_t si_uid;
            int si_status;
            __clock_t si_utime;
            __clock_t si_stime;
        } _sigchld;
        struct {
            void *si_addr;
            short si_addr_lsb;
            union {
                struct {
                    void *_lower;
                    void *_upper;
                } _addr_bnd;
                __uint32_t _pkey;
            } _bounds;
        } _sigfault;
        struct {
            long si_band;
            int si_fd;
        } _sigpoll;
        struct {
            void *_call_addr;
            int _syscall;
            unsigned int _arch;
        } _sigsys;
    } _sifields;
} siginfo_t;

typedef __sigval_t sigval_t;

union pthread_attr_t;

typedef union pthread_attr_t pthread_attr_t;

struct sigevent {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;
    union {
        int _pad[12];
        __pid_t _tid;
        struct {
            void (*_function)(__sigval_t);
            pthread_attr_t *_attribute;
        } _sigev_thread;
    } _sigev_un;
};

typedef struct sigevent sigevent_t;

typedef void (*__sighandler_t)(int);

typedef __sighandler_t sig_t;

struct sigaction {
    union {
        __sighandler_t sa_handler;
        void (*sa_sigaction)(int, siginfo_t *, void *);
    } __sigaction_handler;
    __sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};

struct _fpx_sw_bytes {
    __uint32_t magic1;
    __uint32_t extended_size;
    __uint64_t xstate_bv;
    __uint32_t xstate_size;
    __uint32_t __glibc_reserved1[7];
};

struct _fpreg {
    unsigned short significand[4];
    unsigned short exponent;
};

struct _fpxreg {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short __glibc_reserved1[3];
};

struct _xmmreg {
    __uint32_t element[4];
};

struct _fpstate {
    __uint16_t cwd;
    __uint16_t swd;
    __uint16_t ftw;
    __uint16_t fop;
    __uint64_t rip;
    __uint64_t rdp;
    __uint32_t mxcsr;
    __uint32_t mxcr_mask;
    struct _fpxreg _st[8];
    struct _xmmreg _xmm[16];
    __uint32_t __glibc_reserved1[24];
};

struct sigcontext {
    __uint64_t r8;
    __uint64_t r9;
    __uint64_t r10;
    __uint64_t r11;
    __uint64_t r12;
    __uint64_t r13;
    __uint64_t r14;
    __uint64_t r15;
    __uint64_t rdi;
    __uint64_t rsi;
    __uint64_t rbp;
    __uint64_t rbx;
    __uint64_t rdx;
    __uint64_t rax;
    __uint64_t rcx;
    __uint64_t rsp;
    __uint64_t rip;
    __uint64_t eflags;
    unsigned short cs;
    unsigned short gs;
    unsigned short fs;
    unsigned short __pad0;
    __uint64_t err;
    __uint64_t trapno;
    __uint64_t oldmask;
    __uint64_t cr2;
    union {
        struct _fpstate *fpstate;
        __uint64_t __fpstate_word;
    };
    __uint64_t __reserved1[8];
};

struct _xsave_hdr {
    __uint64_t xstate_bv;
    __uint64_t __glibc_reserved1[2];
    __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state {
    __uint32_t ymmh_space[64];
};

struct _xstate {
    struct _fpstate fpstate;
    struct _xsave_hdr xstate_hdr;
    struct _ymmh_state ymmh;
};

typedef unsigned long size_t;

typedef struct {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
} stack_t;

typedef long long greg_t;

typedef greg_t gregset_t[23];

struct _libc_fpxreg {
    unsigned short significand[4];
    unsigned short exponent;
    unsigned short __glibc_reserved1[3];
};

struct _libc_xmmreg {
    __uint32_t element[4];
};

struct _libc_fpstate {
    __uint16_t cwd;
    __uint16_t swd;
    __uint16_t ftw;
    __uint16_t fop;
    __uint64_t rip;
    __uint64_t rdp;
    __uint32_t mxcsr;
    __uint32_t mxcr_mask;
    struct _libc_fpxreg _st[8];
    struct _libc_xmmreg _xmm[16];
    __uint32_t __glibc_reserved1[24];
};

typedef struct _libc_fpstate *fpregset_t;

typedef struct {
    gregset_t gregs;
    fpregset_t fpregs;
    unsigned long long __reserved1[8];
} mcontext_t;

struct ucontext_t {
    unsigned long uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
};

typedef struct ucontext_t ucontext_t;

struct sigstack {
    void *ss_sp;
    int ss_onstack;
};

struct __pthread_rwlock_arch_t {
    unsigned int __readers;
    unsigned int __writers;
    unsigned int __wrphase_futex;
    unsigned int __writers_futex;
    unsigned int __pad3;
    unsigned int __pad4;
    int __cur_writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[7];
    unsigned long __pad2;
    unsigned int __flags;
};

struct __pthread_internal_list {
    struct __pthread_internal_list *__prev;
    struct __pthread_internal_list *__next;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_mutex_s {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    __pthread_list_t __list;
};

struct __pthread_cond_s {
    union {
        unsigned long long __wseq;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __wseq32;
    };
    union {
        unsigned long long __g1_start;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __g1_start32;
    };
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};

typedef unsigned long pthread_t;

typedef union {
    char __size[4];
    int __align;
} pthread_mutexattr_t;

typedef union {
    char __size[4];
    int __align;
} pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef union {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
} pthread_mutex_t;

typedef union {
    struct __pthread_cond_s __data;
    char __size[48];
    long long __align;
} pthread_cond_t;

typedef union {
    struct __pthread_rwlock_arch_t __data;
    char __size[56];
    long __align;
} pthread_rwlock_t;

typedef union {
    char __size[8];
    long __align;
} pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union {
    char __size[32];
    long __align;
} pthread_barrier_t;

typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;


extern "C" int raise_by_num_lib_halt_c(int num);
static int raise_by_num(int num) {
return raise_by_num_lib_halt_c(num);
}
extern "C" int raise_stop_lib_halt_c(int _);
static int raise_stop(int _) {
return raise_stop_lib_halt_c(_);
}

}
#undef typeid
#undef throw
#undef true
#undef thread_local
#undef template
#undef static_cast
#undef requires
#undef public
#undef protected
#undef reflexpr
#undef operator
#undef noexcept
#undef new
#undef namespace
#undef mutable
#undef try
#undef private
#undef friend
#undef false
#undef virtual
#undef nullptr
#undef export
#undef this
#undef explicit
#undef typename
#undef delete
#undef decltype
#undef co_yield
#undef co_return
#undef co_await
#undef const_cast
#undef constinit
#undef consteval
#undef class
#undef synchronized
#undef char32_t
#undef constexpr
#undef char8_t
#undef catch
#undef using
#undef char16_t
#undef atomic_noexcept
#undef concept
#undef atomic_commit
#undef static_assert
#undef atomic_cancel
#undef dynamic_cast
#undef asm
#undef reinterpret_cast
#undef alignof
#undef alignas
#include <cstring>

#include <unistd.h>


void utbot_redirect_stdin(const char* buf, int &res) {
    int fds[2];
    if (pipe(fds) == -1) {
        res = -1;
        return;
    }
    close(STDIN_FILENO);
    dup2(fds[0], STDIN_FILENO);
    write(fds[1], buf, 64);
    close(fds[1]);
}

template<typename T, size_t N>
T from_bytes(const char (&bytes)[N]) {
    T result;
    std::memcpy(&result, bytes, sizeof(result));
    return result;
}