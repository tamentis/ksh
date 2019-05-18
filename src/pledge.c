/* pledge does not exist anywhere outside of OpenBSD. */

int
pledge(const char *promises, const char *paths[])
{
	return 0;
}
