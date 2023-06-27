#include "main.h"

/**
 * _puts - function prints a string, followed by new line
 * @str: character to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
