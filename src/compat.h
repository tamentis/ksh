/* Copyright (c) 2017-2018 Bertrand Janin <b@janin.com> */

/*
 * This file acts as a compatibility layer to avoid changing the actual source
 * code.
 */

#include <sys/types.h>

#include <stdint.h>

#include "queue.h"

/* Found in include/pwd.h on OpenBSD 6.1 */
#define _PW_NAME_LEN 31

/* Found in include/limits.h on OpenBSD 6.1 */
#define CHILD_MAX 80

/* Yes that sucks. */
#define srand_deterministic srand

/* Found in sys/sys/time.h on OpenBSD 6.3 */
#define	timespeccmp(tsp, usp, cmp)					\
	(((tsp)->tv_sec == (usp)->tv_sec) ?				\
	    ((tsp)->tv_nsec cmp (usp)->tv_nsec) :			\
((tsp)->tv_sec cmp (usp)->tv_sec))

#define	timespecsub(tsp, usp, vsp)					\
	do {								\
		(vsp)->tv_sec = (tsp)->tv_sec - (usp)->tv_sec;		\
		(vsp)->tv_nsec = (tsp)->tv_nsec - (usp)->tv_nsec;	\
		if ((vsp)->tv_nsec < 0) {				\
			(vsp)->tv_sec--;				\
			(vsp)->tv_nsec += 1000000000L;			\
		}							\
	} while (0)

#ifdef __linux__
#include "compat_linux.h"
#endif
