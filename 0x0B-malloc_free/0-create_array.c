#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 *
 * @c: initializing character
 *
 * Return: returns pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(size);
	if (size == 0 || x == NULL)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			x[i] = c;
		}
		return (x);
	}
}
