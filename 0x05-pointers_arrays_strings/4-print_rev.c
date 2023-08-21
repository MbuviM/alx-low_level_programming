#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Function that prints the reverse of a string.
 * @s: Pointer parameter variable
*/

void print_rev(char *s)
{
	int str_length = strlen(s);

	/* For loop to navigate through the string */
	for (int w = str_length - 1; w >= 0; w--)
	{
		puts(w); /*Prints the reverse of the string*/
	}
}

