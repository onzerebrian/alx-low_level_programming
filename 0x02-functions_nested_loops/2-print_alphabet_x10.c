#include "main.h"

/**
 * print_alphabet_x10 -  prints all alphabets in small letters
 *
 */

void print_alphabet_x10(void)
{
	char nn = 'a';
	int no;
	
	for (no = 1; no < 10; no++)
	{
	for (nn = 'a'; nn <= 'z'; nn++)
	{
		_putchar(nn);
	}
	_putchar('\n');
	}
}
