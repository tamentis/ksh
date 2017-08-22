/* Copyright (c) 2017 Bertrand Janin <b@janin.com> */

/*
 * XXX: This is not an implementation of setresuid since it is missing the
 * saved UID, but it will do just fine for now.
 */

#include <sys/types.h>
#include <unistd.h>

int
setresgid(gid_t rgid, gid_t egid, gid_t sgid)
{
	setgid(rgid);
	setegid(egid);
	// setsgid(sgid);

	return 0;
}
