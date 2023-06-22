#include "main.h"

/**
 * _isupper: check lowercase characters
 * @c: the character to be examined
 * return: 1 for uppercase or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
