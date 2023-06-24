#include "main.h"

/**
 * print_numbers - prints numbers from 0 through 9
 */

void print_number(void)
{
	int a;

	for (a >= '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
