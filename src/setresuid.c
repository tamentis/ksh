/* Copyright (c) 2017 Bertrand Janin <b@janin.com> */

/*
 * XXX: This is not an implementation of setresuid since it is missing the
 * saved UID, but it will do just fine for now.
 */

#include <sys/types.h>
#include <unistd.h>

int
setresuid(uid_t ruid, uid_t euid, uid_t suid)
{
	setuid(ruid);
	seteuid(euid);
	// setsuid(suid);

	return 0;
}
