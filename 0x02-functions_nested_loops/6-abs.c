#include "main.h"
#include <stdio.h>

/**
 * _abs - computes an integer's absolute value
 *@c: the numb to be executed
 * @return: (c) absolute value
 *
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
