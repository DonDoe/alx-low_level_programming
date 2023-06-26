#include "main.h"
#include <stdio.h>
/**
 *print_rev- prints a string, in reverse, 
 * return: 0
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		putchar(s[start]);
	putchar('\n');
}
