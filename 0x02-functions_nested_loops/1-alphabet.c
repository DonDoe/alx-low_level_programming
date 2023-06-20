#include "main.h"
/**
 * main: entry point
 * description: print alphabet for sleep game
 * return: always 0 (success)
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
