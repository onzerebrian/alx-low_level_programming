#include "main.h"
/**
 * p - function that converts
 * @n: unput int
 */
void p(unsigned long int n)
{
	if (n == 0)
		return;
	p((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - converts int to binary
 * @n: integer
 * Return: converted int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		p(n);
	}
}
