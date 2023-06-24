#include "main.h"

/**
 * _isupper - function checks for uppercase letters
 * @c : character to check
 * Return: 1 if uppercase 0 lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
