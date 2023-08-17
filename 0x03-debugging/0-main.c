#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 98;
	i = rand() % 200 - 100; /* Generates a random number between -100 and 99 */
	positive_or_negative(i);
	return (0);
}
