#include "main.h"

/**
 * _isupper - function to call
 * @c: character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
