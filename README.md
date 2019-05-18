# ksh port

This is my port of the OpenBSD ksh shell for all my machines not running
OpenBSD.

Barely compiles and kinda runs (thanks to many ugly hacks) on:
 - macOS 10.13
 - Linux

## Installing with Homebrew on macOS
Just do it, you know you want to:
```
$ brew install tamentis/core/openbsd-ksh
```

## What's missing
- There is no call to `pledge()`, since it does not exist outside of OpenBSD.
- This package will not install ksh as sh replacement, neither will it install the corresponding sh man page, this is not intended as a system shell.

## Changelog
### 6.5
- Bound ^L (ctrl-l) to clear the screen rather than redrawing.
- Addressed inconsistent behavior when evaluating arithmetical expressions.
- Skip most of the mail check if MAIL is not set.
- Fixed the case where the recursion detection isn't reset when the command is interrupted.
### 6.4
- Support 64 bit integers on 32 bit architectures.
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
using that code.  It is provided AS IS, with NO WARRANTY, either expressed or
implied.

## Refresh
1. clone the repo for whatever branch you want:
```
$ cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs co -rOPENBSD_6_3 src/bin/ksh
```
2. hack away, diff, incorporate
3. pull request?
