#include "main.h"

/**
 * print_array - function that prints n elements
 * @a: first integer
 * @n: second integer
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
	return;
	}
	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}

