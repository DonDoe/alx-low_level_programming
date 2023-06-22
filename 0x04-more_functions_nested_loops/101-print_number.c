#include "main.h"
#include <stdio.h>

/**
 *print_number - prints an int
 *@n- input int parameter
 *return- 0
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_numbers(i / 10);
	}
	putchar(i % 10 + '0');
}
