#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: character in the array arguement
 */

void rev_string(char *s)
{
	int h = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = h - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
