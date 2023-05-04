#include "main.h"

/**
 * flip_bits -  number of bits you would need to flip to get from one number to another.
 * @n: n
 * @m: m
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long i, j;

	i = n ^ m;
	
	for (j = 0; i > 0;)
	{
		if ((i & 1) == 1)
		{
			j++;
		}
		i = i >> 1;
	}

	return (j);

}
