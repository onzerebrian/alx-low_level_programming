#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number
 *
 * Return: returns square root
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n <= 0 || i * i > n)
	{
		return (-1);
	}

	if (n == i * i)
	{
		return (i);
	}
	else
	{
	i++;
	_sqrt_recursion(n);
	}
}
