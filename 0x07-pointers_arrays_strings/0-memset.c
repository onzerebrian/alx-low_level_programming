#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string pointer
 * @b: constant byte
 * @n: number of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		s[i] = b;
		i--;
	}
	return (s);
}
