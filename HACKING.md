# Hacking notes

Various notes left here to remind myself of the things I learned last time I
hacked on this.

## Command line editing
Editing the command line happens in `x_read()` which calls `x_emacs()` or
`x_vi()` depending on your settings.

### Vi editing mode
- `x_read()`
  - `x_vi()`
    - `vi_hook()`
      Handle a keystroke based on the mode, returns 0 (false) or 1 (true)
      - `vi_insert()`
        Handle a keystroke in insert mode, returns -1 (error), 1 (end of line,
        execute), 0 (keep going)
