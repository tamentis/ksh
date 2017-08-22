/* Copyright (c) 2017 Bertrand Janin <b@janin.com> */

/*
 * This file acts as a compatibility layer to avoid changing the actual source
 * code.
 */

#include <sys/types.h>

/* Found in sys/types.h on OpenBSD. */
// typedef unsigned char u_char;

/* No idea where this is. */
// typedef void * caddr_t;

/* Found in include/pwd.h on OpenBSD. */
#define _PW_NAME_LEN 31

/* Yes that sucks. */
#define srand_deterministic srand
