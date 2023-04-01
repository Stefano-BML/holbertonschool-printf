#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * charsp - print the character
 * @p: pointer
 * @x: counter character
 *
 * Return: void
 */

void charsp(va_list *p, unsigned int *x)
{
	char c;

	c = va_arg(*(p), int);
	_putchar(c);
	*(x) = *(x) + 1;
}

/**
 * strsp - print the string
 * @p: pointer
 * @x: counter string
 *
 * Return: void
 */

void strsp(va_list *p, unsigned int *x)
{
	char *s;
	int i;

	s = va_arg(*(p), char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*(x) = *(x) + 6;
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		*(x) = *(x) + i;
	}
}
