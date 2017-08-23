# ksh port

This is my port of the OpenBSD ksh shell for all my machines not running
OpenBSD.  It is provided AS IS, with NO WARRANTY, either expressed or implied.

Barely compiles and kinda runs on:
 - macOS 10.12
 - Linux

## Current version
This is sync'd with OpenBSD 6.1.

## Disclaimer
I cannot be held responsible for whatever damage is done to your system from
using that code.  I have taken many shortcuts to get that running on both Linux
and macOS

## Refresh
1. clone the repo for whatever branch you want:
```
cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs co -rOPENBSD_6_1 src/bin/ksh
```
2. hack away, diff, incorporate
3. pull request?
