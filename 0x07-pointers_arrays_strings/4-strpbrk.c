#include "main.h"

/**
 * _strpbrk - searches string
 * @s: string
 * @accept: bytes
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
