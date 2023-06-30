#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * leet - check code
 * @str: parameter to check
 * Return: 0.
 */

char *leet(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		char c = str[i];

		if (c == 'a' || c == 'A')
		{
			putchar('4');
		}
		else if (c == 'e' || c == 'E')
		{
			putchar('3');
		}
		else if (c == 'o' || c == 'O')
		{
			putchar('0');
		}
		else if (c == 't' || c == 'T')
		{
			putchar('7');
		}
		else if (c == 'l' || c == 'L')
		{
			putchar('1');
		}
		else
		{
			putchar(c);
		}
	}
	return (0);
}
