
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to int
 * @index: index
 * Return: returns 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	else
	{
	k = k << index;
	*n = ((*n) | k);
	return (1);

	}
}
