#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char l = 'a';
	int c = 0;

	while (c < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		c++;
	}
}

