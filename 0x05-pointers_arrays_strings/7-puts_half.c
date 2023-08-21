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
	for (i = lenn / 2; i >= lenn / 2; lenn++)
		if i % 2 == 0
		{
			putchar(str[i]);
		}
		else
		{
			putchar((lenn - 1) / 2);
		}
	putchar('\n');
}
