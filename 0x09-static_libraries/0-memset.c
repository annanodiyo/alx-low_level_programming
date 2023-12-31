#include "main.h"

/**
 * _memset - function fills a blck of memory
 * @s: 1st address memory to check
 * @b: character desired
 * @n: bytes to be changed
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
