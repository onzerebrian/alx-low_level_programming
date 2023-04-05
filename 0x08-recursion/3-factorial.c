#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: number
 *
 * Return: returns -1 if n is-ve
 */
int factorial(int n)
{
	int i;

	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	i = 1;
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
