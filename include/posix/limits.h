/*
   Copyright (c) 2020-2022 Sibi Siddharthan

   Distributed under the MIT license.
   Refer to the LICENSE file at the root directory for details.
*/

#ifndef WLIBC_POSIX_LIMITS_H
#define WLIBC_POSIX_LIMITS_H

/* These are the standard-mandated minimum values. */

/* POSIX 1 Limits */

/* Minimum number of operations in one list I/O call.  */
#define _POSIX_AIO_LISTIO_MAX 2

/* Minimal number of outstanding asynchronous I/O operations.  */
#define _POSIX_AIO_MAX 1

/* Maximum length of arguments to `execve', including environment.  */
#define _POSIX_ARG_MAX 4096

/* Maximum simultaneous processes per real user ID.  */
#define _POSIX_CHILD_MAX 6

/* Minimal number of timer expiration overruns.  */
#define _POSIX_DELAYTIMER_MAX 32

/* Maximum length of a host name (not including the terminating null)
   as returned from the GETHOSTNAME function.  */
#define _POSIX_HOST_NAME_MAX 255

/* Maximum link count of a file.  */
#define _POSIX_LINK_MAX 8

/* Maximum length of login name.  */
#define _POSIX_LOGIN_NAME_MAX 9

/* Number of bytes in a terminal canonical input queue.  */
#define _POSIX_MAX_CANON 255

/* Number of bytes for which space will be available in a terminal input queue.  */
#define _POSIX_MAX_INPUT 255

/* Maximum number of message queues open for a process.  */
#define _POSIX_MQ_OPEN_MAX 8

/* Maximum number of supported message priorities.  */
#define _POSIX_MQ_PRIO_MAX 32

/* Number of bytes in a filename.  */
#define _POSIX_NAME_MAX 14

/* Number of simultaneous supplementary group IDs per process.  */
#define _POSIX_NGROUPS_MAX 0

/* Number of files one process can have open at once.  */
#define _POSIX_OPEN_MAX 16

/* Number of descriptors that a process may examine with `pselect' or `select'.  */
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX

/* Number of bytes in a pathname.  */
#define _POSIX_PATH_MAX 256

/* Number of bytes than can be written atomically to a pipe.  */
#define _POSIX_PIPE_BUF 512

/* The number of repeated occurrences of a BRE permitted by the
   REGEXEC and REGCOMP functions when using the interval notation.  */
#define _POSIX_RE_DUP_MAX 255

/* Minimal number of realtime signals reserved for the application.  */
#define _POSIX_RTSIG_MAX 8

/* Number of semaphores a process can have.  */
#define _POSIX_SEM_NSEMS_MAX 256

/* Maximal value of a semaphore.  */
#define _POSIX_SEM_VALUE_MAX 32767

/* Number of pending realtime signals.  */
#define _POSIX_SIGQUEUE_MAX 32

/* Largest value of a `ssize_t'.  */
#define _POSIX_SSIZE_MAX 32767

/* Number of streams a process can have open at once.  */
#define _POSIX_STREAM_MAX 8

/* The number of bytes in a symbolic link.  */
#define _POSIX_SYMLINK_MAX 255

/* The number of symbolic links that can be traversed in the
   resolution of a pathname in the absence of a loop.  */
#define _POSIX_SYMLOOP_MAX 8

/* Number of timer for a process.  */
#define _POSIX_TIMER_MAX 32

/* Maximum number of characters in a tty name.  */
#define _POSIX_TTY_NAME_MAX 9

/* Maximum length of a timezone name (element of `tzname`).  */
#define _POSIX_TZNAME_MAX 3

/* Maximum number of connections that can be queued on a socket.  */
#define _POSIX_QLIMIT 1

/* Maximum number of bytes that can be buffered on a socket for send
   or receive.  */
#define _POSIX_HIWAT _POSIX_PIPE_BUF

/* Maximum number of elements in an `iovec' array.  */
#define _POSIX_UIO_MAXIOV 16

/* Maximum clock resolution in nanoseconds.  */
#define _POSIX_CLOCKRES_MIN 20000000

/* POSIX 2 Limits */

/* The maximum number of weights that can be assigned to an entry of
   the LC_COLLATE `order' keyword in the locale definition file.  */
#define _POSIX2_COLL_WEIGHTS_MAX 2

/* The maximum number of expressions that can be nested
   within parentheses by the `expr' utility.  */
#define _POSIX2_EXPR_NEST_MAX 32

/* The maximum length, in bytes, of an input line.  */
#define _POSIX2_LINE_MAX 2048

/* The maximum number of repeated occurrences of a regular expression
   permitted when using the interval notation `\{M,N\}'.  */
#define _POSIX2_RE_DUP_MAX 255

/* The maximum number of bytes in a character class name.  We have no
   fixed limit, 2048 is a high number.  */
#define _POSIX2_CHARCLASS_NAME_MAX 14

#endif
