#include <stdio.h>
#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * Return: The result multiplied by sign.
 * @s: Pointer parameter variable
*/
int _atoi(char *s) 
{
	int sign = 1;
	int result = 0;
	int i = 0;

    /* Skip whitespace */
	while (s[i] == ' ') 
	{
		i++;
	}

    /* Check for a sign */
	if (s[i] == '-' || s[i] == '+') 
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

    /* Convert characters to integer */
	while (s[i] >= '0' && s[i] <= '9') 
	{
		/* Check for overflow before adding a new digit */
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)) 
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
