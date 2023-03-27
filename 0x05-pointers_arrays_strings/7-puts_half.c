#include "main.h"

/**
 * puts_half - prints second half of the characters
 * @str: string pointer
 */

void puts_half(char *str)
{
	int x, i = 0, l = 0;

	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	if (l % 2 == 0)
	{
		x = l / 2;
	}
	else
	{
		x = (l + 1) / 2;
	}
	for (i = x; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
