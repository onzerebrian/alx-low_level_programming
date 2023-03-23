#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 *
 * @n: the number of times the character shoulb be printed
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
