#include "main.h"

/**
 * swap_int - Function that swaps two values.
 * @a: Pointer to an integer (first value)
 * @b: Pointer to an integer (second value)
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*b = *a;
	*b = v;
	v = *b;
}
