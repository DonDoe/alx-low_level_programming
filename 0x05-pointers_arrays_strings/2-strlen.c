#include "main.h"
/**
 *int _strlen: returns the length of a string
 *
 *return - string length
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
