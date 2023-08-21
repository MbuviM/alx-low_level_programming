#include <stdio.h>
#include "main.h"

/**
 * puts2 - Function that prints the string.
 * @str: Pointer parameter variable
 * for loop that prints the new string
*/
void puts2(char *str)
{
	int alpha;

	length = strlen(str);
	for (alpha = 0; alpha <= length; alpha++)
	{
		putchar(str[alpha]);
	}
	putchar('\n');
}
