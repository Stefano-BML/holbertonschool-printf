#include "main.h"
/**
 * _printf - name functions
 * @format: pointer of what is sent in the main
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list p;
	unsigned int i, j, x = 0;
	types typelist[] = {
		{'c', charsp},
		{'s', strsp},
		{'\0', NULL}
	};

	va_start(p, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				i++;
				x++;
			}
			for (j = 0; typelist[j].type != '\0'; j++)
			{
				if (format[i + 1] == typelist[j].type)
				{
					(*typelist[j].f)(&p, &x);
					i++;
					break;
				}
			}
		}
		_putchar(format[i]);
		x++;
	}
	va_end(p);
	return (x);
}
