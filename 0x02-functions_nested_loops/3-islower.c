#include "main.h"

/**
 * print_alphabet_x10 -  prints all alphabets in small letters
 *
 */

int _islower(int c)
{
	int no;

	no = c;
	if (no >= 97 && no <= 122)
	{
		_putchar('1');
	} else
	{
		_putchar('0');
	}
	_putchar('\n');

}
