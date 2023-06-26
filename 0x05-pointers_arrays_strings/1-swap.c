#include "main.h"
/**
 *swap_int: swaps the values of two integers
 * @a and @b - the values to be swapped
 *return- 0
 */
void swap_int(int *a, int *b)
{
	int change;

change = *b;
*b = *a;
*a = change;
}
