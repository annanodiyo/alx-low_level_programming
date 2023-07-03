#include "main.h"

/**
 * _memset - function fills a memory area with a constant byte
 * @b: constant byte
 * @n: first byte
 * @s: memory area s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; 0 < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
