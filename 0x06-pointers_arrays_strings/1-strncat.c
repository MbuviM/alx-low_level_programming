#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - Function that concatenates strings.
 * Return: dest Success
 * @dest: Destination
 * @src: Source
 * @n: variable that shows the number of characters to be added to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int srcc;
	int dest_len;

	dest_len = strlen(dest); /* Finding the length of dest */
	srcc = strlen(src); /* Finding the length of src */
	/* For loop that prints out the characters in src */
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0'; /* Adding the null terminator to dest */
	putchar('\n');
	return (dest);
}
