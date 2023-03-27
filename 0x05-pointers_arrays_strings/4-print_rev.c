#include "main.h"

/**
 * print_rev - function that prints string in reverse
 *
 * @s: pointer variable
 */

void print_rev(char *s)
{
	 int n, i = 0, l = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	l--;
	for (n = l; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

}
