#include <stdio.h>
#include "main.h"

/**
 * get_bit-  returns the value of a bit at a given index
 * @n: input int
 * @index: index
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, m;

	m =  index;
	if (m > (sizeof(8) * 8))
	{
		return (-1);
	}
	for (i = 0; i < m; i++)
	{
		n = n >> 1;
	}
	return ((n & 1));

}
