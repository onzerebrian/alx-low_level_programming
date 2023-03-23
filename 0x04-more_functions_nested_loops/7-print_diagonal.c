#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of spaces
 * Return: 0 for success
 */

void print_diagonal(int n)
{
	int i;
	int m;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
	for (m = 1; m <= i; m++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
