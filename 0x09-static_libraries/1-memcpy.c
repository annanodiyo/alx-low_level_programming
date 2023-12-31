#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory for storage
 * @src: memory where is copied
 * @n: bytes
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
	{
		dest[s] = src[t];
		n--;
	}
	return (dest);
}
