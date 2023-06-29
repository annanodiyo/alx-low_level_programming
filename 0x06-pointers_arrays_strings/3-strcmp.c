#include <string.h>
#include "main.h"

/**
 * my_strcmp - function compares two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: the difference between the strings
 */

int my_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1 > *s2) - (*s1 < *s2));
}
