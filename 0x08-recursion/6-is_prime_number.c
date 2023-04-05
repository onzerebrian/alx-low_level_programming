#include "main.h"

/**
 * xa - new function
 *
 * @: the number
 *
 * @i: counter
 *
 * @n: new variba;e
 *
 * Return: retuurn the result
 */

int xa(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (xa(n, i - 1));
}


/**
 * is_prime_number - checks if its a prime number
 *
 * xa - new function
 *
 * @: the number
 *
 * @n: new variba;e
 *
 * Return: retuurn the result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (xa(n, n - 1));
}
