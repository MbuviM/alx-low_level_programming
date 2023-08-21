#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function to print the length of a string.
 * @s: Pointer parameter variable.
 * Return: length of the string.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
