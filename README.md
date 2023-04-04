# OUR FIRST PRINTF
=====================

## The printf function
-----------------------

The printf() function is used in C to print text to the screen. It is a standard C library function and is used to display messages on the console or in the output window of a program.

In addition, printf() also allows you to print variable values.

## we will make a custom function that performs the printf function
---------------------------------------------------------------------

This custom function can use system calls to send characters to standard output.

## Prototype
---

```c
#include "main.h"

int _printf(const char *format, ...);
```

## Description of each file:
```
main.h ---------------------------- Contains the function prototypes for the *.c files.
_putchar.c ---------------------------- custom function _putchar
_printf.c ---------------------------- custom function _printf
futions.c ---------------------------- Specifiers %c(single character) & %s(a string) & %(NULL) to be printed.
funtions_helper.c ---------------------------- Specifiers %d(decimals) & %i(integers) for printing in base 10.
man_3_printf ----------------------- customized manual page for the _printf library
```

## Clone:
---
```bash
$ git clone https://github.com/Stefano-BML/holbertonschool-printf.git
```
## Change directory:
---
```bash
$ cd holbertonschool-printf
```

## List directory:
---
```bash
$ ls
authors  funtions_helper.c  futions.c  main.h  
man_3_printf  _printf.c  _putchar.c  README.md
```

## Example:
---
* ## SPECIFIERS
    ---
    |    Specifiers | Description                              | Example |
    | ----------: | ------------------------------------------ |---------|
    |   %c  | Prints a single character                        |x        |
    |   %s  | Prints an entire string                          |Holberton|
    |   %   | Print NULL                                       |NULL     |
    |   %i  | Prints integers                                  |20       |
    |   %d  | Print Signed decimal integer                     |100.50   |

```c
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
    _printf("Hello %s\n", "World");
    _printf("Prints character: '%c'\n", 'h');
    _printf("The sum is: %d + %i = %d\n", 10, 20, 10 + 20);
    return (0);
}
```

## Compilation:
---

All files will be compiled with gcc using the flags:  -Wall -Werror -Wextra -pedantic

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

## Second way of copiling:
---
To create a test directory, We can have a Test folder, to make it work in this way we must create the ```Test``` folder and copy the ```main.h``` file, so that our directory is cleaner.

```bash
$ mkdir Test && cp main.h Test
```

## Modify or create a new file for the test:
----
To apply the testing we can modify the code of the ```Test/main.c``` file or create a new file by replacing the path of the ```Test/*.c``` file.

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o printf Test/main.c && mv printf Test/ && echo "successful compilation."
```

### We can use the library according to the specifiers shown in the table.

## Execute:
---
```bash
$ ./Test/printf
Hello World
Prints character: 'h'
The addition is: 10 + 20 = 30
```
## Authors
* [**Stefano Madueño**](https://github.com/Stefano-BML) - [*@Stefano-BML*](stefanoml1128@gmail.com)
* [**Johana Herrera**](https://github.com/Johana-RHP) - [*@Johana-RHP*](hp.rosicel@gmail.com)
* [**Helder Guevara**](https://github.com/Ghelder) - [*@Jhelderng*](helder.21.helder@gmail.com)
