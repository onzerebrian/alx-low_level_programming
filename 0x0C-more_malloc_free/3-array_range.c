#include "main.h"
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 * @min: minimum number
 * @max: max number
 * Return: returns pointer
 */
int *array_range(int min, int max)
{
	int m, x = 0, i;
	int *ptr;

	if (max < min)
	{
	return (NULL);
	}
	for (i = min; i <= max; i++)
	{
	x++;
	}
	m = (x * sizeof(int));
	ptr = malloc(m);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = min; i <= max; i++)
	{
	ptr[i - min] = i;
	}
	return (ptr);
}

