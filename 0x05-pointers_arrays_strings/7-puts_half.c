#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - Function that prints half the string.
 * @str: Parameter pointer variable
*/

void puts_half(char *str)
{
	int i;
	int lenn;

	lenn = strlen(str);
	for (i = (lenn - 1) / 2 + 1; i < lenn; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
