#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - function capitalizes string
 * @str: string to capitalize
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	int length = strlen(str);
	int capitalize = 1;

	for (i = 0; i < length; i++)
	{
		if (capitalize && isalpha(str[i]))
		str[i] = toupper(str[i]);
		capitalize = (str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
              str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
              str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n' ||
              str[i] == '\t');

		if (isalpha(str[i]))
		capitalize = 0;
	}
	return (str);
}
