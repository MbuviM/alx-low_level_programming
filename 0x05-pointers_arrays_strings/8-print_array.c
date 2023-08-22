#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints elements in an array.
 * @a: Pointer parameter variable
 * @n: Number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i <= n - 2)
		{
			printf(", ");

		}
	}
	printf("\n");
}
