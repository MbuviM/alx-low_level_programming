#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - Function that prints the string.
 * @str: Pointer parameter variable
 * for loop that prints the new string
*/
void puts2(char *str)
{
	int alpha;
	int length;

	length = strlen(str);
	for (alpha = 0; alpha <= length; alpha++)
	{
		if (alpha % 2 == 0)
			putchar(str[alpha]);
		else
			continue;
	}
	putchar('\n');
}
