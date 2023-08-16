# include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* Function that prints the alphabets*/
{

	char letter = 97;

	while (letter >= 97)
	{
		putchar(letter);
		putchar('\n');
		letter = letter + 1;

	}
}
int main(void)
{
print_alphabet();
return (0);
}
