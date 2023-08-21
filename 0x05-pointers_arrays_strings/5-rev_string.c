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

	for (letter = len - 1; letter < length/2; letter++)
	{
		char temp = [letter];
		s[letter] = s[length - letter - 1];
		s[letter] = temp;
	}
}
