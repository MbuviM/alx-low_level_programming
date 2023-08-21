#include "main.h"
#include <string.h>
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

	for (letter = len - 1; letter < len / 2; letter++)
	{
		char temp;

		temp = s[letter];
		s[letter] = s[len - letter - 1];
		s[letter] = temp;
	}
}
