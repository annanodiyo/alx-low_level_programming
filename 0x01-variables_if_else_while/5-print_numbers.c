#include <stdio.h>

/**
 * main - Prints all single-digit numbers of base 10 starting from 0.
 *
 * Return: 0 indicating successful execution.
 */

int main(void)
{
	int y = 0;

	while (y <= 9)
	{
	if (y != 9)
	{
		printf("%d", y);
	}
	else
	{
		printf("%d\n", y);
	}
	y++;
	}

	return (0);
}
