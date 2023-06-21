#include <stdio.h>
/**
 * main - printing alphabet in lowercase except q and e
 * Return: 0(lowercase)
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
}
