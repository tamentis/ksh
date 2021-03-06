/*	$OpenBSD: config.h,v 1.15 2015/09/14 16:10:55 nicm Exp $	*/

/* config.h.  NOT generated automatically. */

/*
 * This file, config.h, which is a part of pdksh (the public domain ksh),
 * is placed in the public domain.  It comes with no licence, warranty
 * or guarantee of any kind (i.e., at your own risk).
 */

#ifndef CONFIG_H
#define CONFIG_H

#include "compat.h"

/* Include emacs editing? */
#define EMACS 1

/* Include vi editing? */
#define VI 1

/* Strict POSIX behaviour? */
/* #undef POSIXLY_CORRECT */

/* Specify default $ENV? */
/* #undef DEFAULT_ENV */

/*
 * End of configuration stuff for PD ksh.
 */

#if defined(EMACS) || defined(VI)
# define	EDIT
#else
# undef		EDIT
#endif

/* Super small configuration-- no editing. */
#if defined(EDIT) && defined(NOEDIT)
# undef EDIT
# undef EMACS
# undef VI
#endif

#endif /* CONFIG_H */
