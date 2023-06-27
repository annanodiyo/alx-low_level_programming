#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints string in reverse
 * @s: character to print in reverse
 */
void print_rev(char *s)
{
	int h = strlen(s);
	int i;

	for (i = h - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
