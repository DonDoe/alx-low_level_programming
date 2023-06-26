#include "main.h"
#include <stdio.h>
/**
 *puts2: prints every other character of a string, starting with the first character
 *@str - the sdtring reference
 *return- 0
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
		{
			putchar(str[z]);
		}
		z++;
	}
	putchar('\n');
}
