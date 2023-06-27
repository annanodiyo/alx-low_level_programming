#include "main.h"

/**
 * _strcpy - function copies the string pointed to by src
 * @dest: pointer to the destination
 * @src: pointer to the destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

