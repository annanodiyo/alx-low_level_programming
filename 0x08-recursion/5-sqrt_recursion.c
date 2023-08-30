#include "main.h"

/**
 * _sqrt_recursion - function to return the natural square root of a number
 * @n: value to calculate the square root
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - function recurses to find natural sqrt
 * @j: iterator
 * @n: value to use
 * Return: the resulting square root
 */

int real_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (real_sqrt_recursion(n, j + 1));
}
