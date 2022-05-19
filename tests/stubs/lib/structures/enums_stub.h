//1652955986000000000
//Please, do not change the line above
/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#define _Alignas(x)
enum Sign {
    NEGATIVE,
    ZERO,
    POSITIVE
};

struct EnumStruct {
    enum Sign s;
};

struct EnumArrayWrapper {
    enum Sign signs[5];
};

typedef __builtin_va_list __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef unsigned long size_t;

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

struct _IO_FILE;

typedef struct _IO_FILE __FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
} __mbstate_t;

typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;

typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;

struct _IO_jump_t;

struct _IO_FILE;

typedef void _IO_lock_t;

struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};

enum __codecvt_result {
    __codecvt_ok,
    __codecvt_partial,
    __codecvt_error,
    __codecvt_noconv
};

struct _IO_FILE {
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
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

typedef struct _IO_FILE _IO_FILE;

struct _IO_FILE_plus;

typedef __ssize_t (__io_read_fn)(void *, char *, size_t);

typedef __ssize_t (__io_write_fn)(void *, const char *, size_t);

typedef int (__io_seek_fn)(void *, __off64_t *, int);

typedef int (__io_close_fn)(void *);

typedef __off_t off_t;

typedef __ssize_t ssize_t;

typedef _G_fpos_t fpos_t;

struct EnumWithinRecord {
    enum  {
        OPEN,
        FF_FOUND,
        ON_HOLD,
        CLOSED
    } e;
};


