#include "main.h"
#include <stddef.h>

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: int pointer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurrred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int x;

	i = i << index;
	x = sizeof(unsigned long int);
	
	if (index > x * 8)
		return (-1);
	if (n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
	{
		*n = i ^ *n;
		return (1);
	}
}
