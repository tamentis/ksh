# ksh port

This is my port of the OpenBSD ksh shell for all my machines not running
OpenBSD.  It is provided AS IS, with NO WARRANTY, either expressed or implied.

Barely compiles and kinda runs on:
 - macOS 10.12, 10.13
 - Linux

## Installing with Homebrew on macOS
Just do it, you know you want to:
```
$ brew install tamentis/core/openbsd-ksh
```

## Current version
This is sync'd with OpenBSD 6.3.

## Changes
### 6.3
- Memory allocation was switched from calloc(3) back to malloc(3), making it
  easier to recognize uninitialized memory. As a result, a history-related bug
  in emacs editing mode was discovered and fixed. 
### 6.2
- Improved UTF-8 line editing support for Emacs and Vi input mode.
### 6.1
- Partial UTF-8 line editing support for Vi input mode.
### 6.0
- Improve various details of POSIX compliance.
### 5.9
- Partial support for inserting and deleting UTF-8 characters in emacs command line editing mode. 

## Disclaimer
I cannot be held responsible for whatever damage is done to your system from
using that code.  I have taken many shortcuts to get that running on both Linux
and macOS

## Refresh
1. clone the repo for whatever branch you want:
```
$ cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs co -rOPENBSD_6_3 src/bin/ksh
```
2. hack away, diff, incorporate
3. pull request?
