#include "main.h"

/**
 * _isdigit - checks if character is not greater than 9
 * @c: character to check
 * Return: 1 if c is a digit 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
