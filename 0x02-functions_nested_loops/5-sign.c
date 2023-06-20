#include "main.h"

/**
 *print_sign - prints the sign of the number
 *@n: the number to be exetuted
 *return: 1 for +ve number, -1 for negative number and 0 for any other
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
