#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		printf("%d", a);
	}
	if (b > a && b > c)
	{
		print("%d", b);
	}
	if (c > a && c > b)
	{
		print("%d", c);
	}
	printf("%d is the largest number\n", largest);
	return (0);
}

