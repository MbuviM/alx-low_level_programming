#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
		{
			char letter = *ptr - ((*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A');
			*ptr = rot13[letter];
		}
		ptr++;
	}
	return (str);
}

