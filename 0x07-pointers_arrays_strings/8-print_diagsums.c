#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum.
 * @a: Parameter
 * @size: Parameter
 */

void print_diagsums(int *a, int size)
{
	int mainDiagonalSum;
	int secondaryDiagonalSum;

	mainDiagonalSum = 0;
	secondaryDiagonalSum = 0;

	/* Calculate the sums of the main diagonal and secondary diagonal */
	for (int i = 0; i < size; i++)
	{
		/* Elements on the main diagonal*/
		mainDiagonalSum += a[i * size + i];
		/*Elements on the secondary diagonal*/
		secondaryDiagonalSum += a[i * size + (size - 1 - i)];
	}
}

