#include "main.h"

/**
 * is_prime_number - checks if its a prime number
 *
 * @: the number
 *
 * Return: retuurn the result
 */

int x(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (x(n, i - 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (x(n, n - 1));
}
