#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps two values.
 * @a: Pointer to an integer (first value)
 * @b: Pointer to an integer (second value)
 */

void swap_int(int *a, int *b)
{
/* temp - temporary variable */
	int temp;
/* Switching the values of a and b */
	temp = *a;
	*a = *b;
	*b = temp;
}
