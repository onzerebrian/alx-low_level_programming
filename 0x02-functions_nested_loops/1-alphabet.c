#include "main.h"

/**
 *
 * print_alphabet -  prints all alphabets in small letters
 *
 */

void print_alphabet(void)
{
	char nn = 'a';

	for (nn = 'a'; nn <= 'z'; nn++)
	{
		_putchar(nn);
	}
	_putchar('\n');
}
