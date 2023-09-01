#include "main.h"

/**
 * is_prime_number - function to call
 * @n: value to check
 * Return: 1 if n is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (true_prime(n, n - 1));
}

/**
 * true_prime - function calculates if the number is prime recursively
 * @n: value to check
 * @i: iterator
 * Return: 1 if n is prime othherwise 0
 */

int true_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (true_prime(n, i - 1));
}
