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
	void (*f)(va_list *, unsigned int *);
} types;

int _putchar(char c);
int _printf(const char *format, ...);
void charsp(va_list *p, unsigned int *x);
void strsp(va_list *p, unsigned int *x);
void intsp(va_list *p, unsigned int *x);
unsigned int num_len(int n);
void print_number(int n);
#endif
