#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @dest: first parameter
 * @src: second parameter
 * Return: to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
