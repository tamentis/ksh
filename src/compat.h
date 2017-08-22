/* Copyright (c) 2017 Bertrand Janin <b@janin.com> */

/*
 * This file acts as a compatibility layer to avoid changing the actual source
 * code.
 */

#include <sys/types.h>

#include "queue.h"

/* Found in include/pwd.h on OpenBSD 6.1 */
#define _PW_NAME_LEN 31

/* Found in include/limits.h on OpenBSD 6.1 */
#define CHILD_MAX 80

/* Yes that sucks. */
#define srand_deterministic srand
