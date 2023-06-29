#include "main.h"

/**
 * reverse_array - reverses theh array of integers
 * @a: an array ofintegers
 * @n: number of elements to swap
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int stop = n - 1;
	int temp;

	while (start < stop)
	{
		temp = a[start];
		a[start] = a[stop];
		a[stop] = temp;

		start++;
		stop--;
	}
}
