# include <stdio.h>

/**
 * print_alphabet - Function that prints the alphabets
*/
void print_alphabet(void)
{
	char letter = 97;

	while (letter >= 97)
        {
        	putchar(letter);
        	putchar('\n');
        	letter = letter + 1;
        }
}
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
