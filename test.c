#include "main.h"
#include <stdio.h>

/**
 * main - is responsible for testing the main function
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, y;

	i = _printf("Hello %s\n", "worl", 1, 2, 3);
	printf("Hello %s\n", "worl", 1, 2, 3);
	printf("%d\n", i); /*the number of characters it prints*/
	i = _printf("%% %sss\n", "Up");
	printf("%% %sss\n", "Up");
        printf("%d\n", i);
	i = _printf("%c", '\0');
	printf("%c", '\0');
        printf("%d\n", i);
	i = _printf(NULL);
	printf(NULL);
	printf("%d\n", i);
	i = _printf("%");
	printf("%");
	printf("%d\n", i);
	i = _printf("I fell %!$/=#\n");
	printf("I fell %!$/=#\n");
        printf("%d\n", i);
	i = _printf("I had %s and I have %c soles left, today 31\n", "99875", '5');
	printf("I had %s and I have %c soles left, today 31\n", "99875", '5');
        printf("%d\n", i);
	y = _printf("%d\n", 116);
	printf("%d\n", 116);
	printf("%d\n", y);
	y = _printf("I want %d %s\n", 116, "dollars");
	printf("I want %d %s\n", 116, "dollars");
        printf("%d\n", y);
	y = _printf("%i\n", "thirty");
	printf("%i\n", "thirty");
        printf("%d\n", y);
	y = _printf("%d-%d=%i\n", 25, 30, -5);
	printf("%d-%d=%i\n", 25, 30, -5);
        printf("%d\n", y);
	y = _printf("%idididid\n", 167543);
	printf("%idididid\n", 167543);
        printf("%d\n", y);
	y = _printf("%d\n",'\0');
	printf("%d\n",'\0');
        printf("%d\n", y);
	return(0);
}
