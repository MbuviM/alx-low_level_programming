#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 -Function that prints the alphabets ten times.
 */
void print_alphabet_x10(void)
{
	char alpha = 97;
	int num;

	for (num = 0; num < 10; num++)
	{
		while (alpha >= 97 && alpha <= 122)
		{
			putchar(alpha);
			alpha = alpha + 1;
		}
		alpha = 97;
	putchar('\n');
	}
}
