#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *  struct sp - structure of specifiers and their functions
 *  @type: specifier
 *  @f: function to be used
 *
 *  structure of specifiers and what they do
 */

typedef struct sp
{
	char type;
	void (*f)(va_list *);
} types;

int _putchar(char c);
int _printf(const char *format, ...);
void charsp(va_list *p);
void strsp(va_list *p);
#endif
