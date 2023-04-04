# OUR FIRST PRINTF
=====================

## The printf function
-----------------------

The printf() function is used in C to print text to the screen. It is a standard C library function and is used to display messages on the console or in the output window of a program.

In addition, printf() also allows you to print variable values.

## we will make a custom function that performs the printf function
---------------------------------------------------------------------

This custom function can use system calls to send characters to standard output.

## Compilation:
---

All files will be compiled with gcc using the flags:  -Wall -Werror -Wextra -pedantic

    $ gcc -Wall -Werror -Wextra -pedantic *.c

## SPECIFIERS
---

|    Specifiers | Description                              |
| ----------: | ------------------------------------------ |
|   %c  | Prints a single character                        |
|   %s  | Prints an entire string                          |
|   %   | Print NULL                                       |
|   %i  | Prints integers                                  |
|   %d  | Print Signed decimal integer                     |
