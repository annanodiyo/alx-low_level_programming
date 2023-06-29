#include "main.h"

/**
 * _strncat - function that cncatenates two strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: bytes to use
 * Return: to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
