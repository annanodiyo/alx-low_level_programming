#include "main.h"

/**
 * char *_strcpy - function copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int l = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for (; l < k; l++)
	{
		dest[l] = src[l];
	}
	dest[k] = '\0';
	return (dest);
}
