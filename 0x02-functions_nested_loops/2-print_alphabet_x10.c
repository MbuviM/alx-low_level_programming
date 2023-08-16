#include <stdio.h>
/**
 * print_alphabet_x10 -Function that prints the alphabets ten times.
*/
void print_alphabet_x10(void)
{
	char alpha = 97;

	for (int num = 0; num < 10; num++)
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
/*
 * main - Start of the program
 * Return - (0) means Success
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
