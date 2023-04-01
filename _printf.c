#include "main.h"

void especificador(const char *format, unsigned int *i,
		unsigned int *x, int *flag, types typelist[], va_list *p)
{
	int j;

	if (format[*i + 1] == '%')
	{
		_putchar(format[*i + 1]);
		*i = *i + 1;
		*x = *x + 1;
		*flag = 1;
	}
	else
	{
		for (j = 0; typelist[j].type != '\0'; j++)
		{
			if (format[*i + 1] == typelist[j].type)
			{
				(*typelist[j].f)(p, x);
				*i = *i + 1;
				*flag = 1;
				break;
			}
		}
	}
}
/**
 * _printf - name functions
 * @format: pointer of what is sent in the main
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list p;
	unsigned int i, x = 0;
	int flag = 0;
	types typelist[] = {
		{'c', charsp},
		{'s', strsp},
		{'d', intsp},
		{'i', intsp},
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

			especificador(format, &i, &x, &flag, typelist, &p);

			if (flag == 0)
			{
				_putchar(format[i]);
				x++;
			}
		}
		else
		{
			_putchar(format[i]);
			x++;
		}
	}
	va_end(p);
	return (x);
}
