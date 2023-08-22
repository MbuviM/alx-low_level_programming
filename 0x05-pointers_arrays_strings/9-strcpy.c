#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Function that prints a string from the source to destination.
 * @dest: Destination
 * @src: Source
 * Return: dest Success.
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
