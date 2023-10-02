#include "main.h"

/**
 * _strncpy - function copies string
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char  *src, int n)
{
	int w;

	w = 0;
	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}
	return (dest);
}
