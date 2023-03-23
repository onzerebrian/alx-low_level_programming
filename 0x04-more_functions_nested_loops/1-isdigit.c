#include "main.h"

/**
 * _isdigit - a function that checks for digits 0 to 9
 * @c: input character
 * Return: 1for digit and 0 for non digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
