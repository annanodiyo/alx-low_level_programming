#include <stdio.h>
/**
 * main - prints the various types on the computer
 * Return: 0
 */
int main(void)
{
	char p;
	int q;
	long int r;
	long long int s;
	float t;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(p));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(t));
return (0);
}
