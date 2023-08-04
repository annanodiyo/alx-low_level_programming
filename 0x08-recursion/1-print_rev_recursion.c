#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints character in reverse
 * @s: string to reverse
 * Return: Always 0 on success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
