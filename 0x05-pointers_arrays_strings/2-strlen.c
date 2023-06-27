#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
