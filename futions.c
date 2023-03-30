#include "main.h"


void charsp(va_list *p)
{
	char c;

	c = va_arg(*(p),int);
	_putchar(c);
}


void strsp(va_list *p)
{
	char *s;
	int i;

	s = va_arg(*(p), char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}	
}
