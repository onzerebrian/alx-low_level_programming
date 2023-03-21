#include "main.h"

/**
 * print_alphabet_x10 -  prints all alphabets in small letters
 *
 */

int _islower(int c)
{
	char nn = 'a';
	int no;

	no = nn;
	if (no >= 97 && no <= 122)
	{
		_putchar('1');
	} else
	{
		_putchar('0');
	}
	_putchar('\n');

}
