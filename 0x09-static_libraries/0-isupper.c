#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 *
 * @c: an input character
 * Return: 1 to mean upper and o lower case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
