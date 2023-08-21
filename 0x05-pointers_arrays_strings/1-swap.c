#include "main.h"

/**
 * void swap_int(int *a, int *b)- Function that swaps two values.
 * @a - Pointer variable
 * @b - Pointer variable
 * @temp - Temporaray variable
 */
void swap_int(int *a, int *b)

	int *temp = *a;
	*b = *temp = *a;

