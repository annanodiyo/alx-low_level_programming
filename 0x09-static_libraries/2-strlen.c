#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int lenstr = 0;

	while (*s != '\0')
	{
		lenstr++;
		s++;
	}
	return (lenstr);
}
