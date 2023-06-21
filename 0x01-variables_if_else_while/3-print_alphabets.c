#include <stdio.h>
/**
 * main - printing alphabet in lowercase and uppercase
 * Return: 0(lowercase)
 */
int main(void)
{
	char d = 'a';
	char f = 'A';

	while
		(d <= 'z') {
			putchar(d);
			d++;
	}
	while
		(f <= 'Z') {
			putchar(f);
			f++;
	}
	putchar('\n');
	return (0);
}
