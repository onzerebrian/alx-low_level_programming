#include "main.h"

/**
 * more_numbers - print numbers more than 9
 * Return: new
 */

void more_numbers(void)
{
	int a;
	int b;
	int i;

	for (i = 0; i <= 9; i++)
	{
	for (a = 0; a <= 1; a++)
	{
	for (b = 48; b <= 57; ++b)
	{
	if (a == 1 && b > 52)
	{
	break;
	}
	if (a == 1)
	{
	_putchar('0' + 1);
	}
	_putchar(b);
	}
	}
	_putchar('\n');
	}
}
