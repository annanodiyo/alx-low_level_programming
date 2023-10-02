#include "main.h"
/**
 * _strcmp  - function compares string values
 * @s1: string one
 * @s2: string 2
 * Return: s1 compared to s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
