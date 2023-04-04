
#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to print
 *
 * Return: Void.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}

/**
 * num_len - gets the length of the integer
 * @n: the number to be required the length
 *
 * Return: the length of the book.
 */

unsigned int num_len(int n)
{
	unsigned int len = 0;
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		len++;
	}
	else
	{
		num = n;
	}

	do {
		len++;
		num /= 10;
	} while (num != 0);

	return (len);
}
