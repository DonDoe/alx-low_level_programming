#include "main.h"
#include <stdio.h>
/**
 *@*_strcpy- copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 *@src and @dest - char type string
 * return - the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
