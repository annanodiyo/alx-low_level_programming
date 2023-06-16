#include <stdio.h>
/**
 * main - prints the various types on the computer
 * Return: 0
 */
int main(void)
{
	char p;
	int q;
	long long int r;
	long int s;
	float t;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
