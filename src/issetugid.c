/* Copyright (c) 2019 Bertrand Janin <b@janin.com> */

/*
 * XXX: This is not an implementation of issetugid but since this call is made
 * to check on how to use pledge() and pledge is not available on any of the
 * systems we target, we can safely use a dummy version.
 */

int
issetugid(void)
{
	return 0;
}
