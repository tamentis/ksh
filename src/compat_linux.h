/* Copyright (c) 2018 Bertrand Janin <b@janin.com> */

#include <signal.h>

/* Source: sys/sys/_time.h on OpenBSD 6.3 */
#define CLOCK_MONOTONIC			3

/* Source: src/include/vis.h on OpenBSD 6.3 */
#define VIS_NL		0x0010
#define VIS_WHITE	(VIS_SP | VIS_TAB | VIS_NL)
#define VIS_SAFE	0x0020

/* Source: sys/fcntl.h on OpenBSD 6.3 */
#define	O_EXLOCK	0x0020

#define __dead

extern const char *const sys_siglist[NSIG];
extern const char *const sys_signame[NSIG];
