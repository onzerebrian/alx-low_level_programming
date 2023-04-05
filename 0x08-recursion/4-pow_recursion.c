#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base
 *
 * @y: power
 *
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	int i;

	i = x;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		i = 1;
	}
	else
	{
		i = i * _pow_recursion(y - 1);
	}
	return i;
}
