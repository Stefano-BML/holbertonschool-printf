#include "main.h"

/**
 * _printf - name functions
 * @format: pointer of what is sent in the main
 *
 * Return: Number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list p;
	unsigned int i, j;

	types typelist[] = {
		{'c', charsp},
		{'s', strsp},
		{'\0', NULL}
	};
	va_start(p, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; typelist[j].type != '\0'; j++)
			{
				if (format[i + 1] == typelist[j].type)
				{
					(*typelist[j].f)(&p);
					i++;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(p);
	return (0);
}
