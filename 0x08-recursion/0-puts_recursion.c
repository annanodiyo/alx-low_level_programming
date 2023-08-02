#include "main.h"
#include "stdio.h"
/**
 * _puts_recursion - function to call
 * @s: character
 * Return: 0 on success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
