#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function that prints the reverse of the string
 * @s: pointer parameter variable
*/

void rev_string(char *s)
{
	int len;
	int letter;

	len = strlen(s);

	for (letter = len - 1; letter >= 0; letter--)
	{
		putchar(s[letter]);
	}
}

