#include "main.h"
#include <stdio.h>

/**
 *_abs - computes absolute values of integers
 *@c: the number under computation
 *Return: zero or absolute number of a value
 */

int abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
