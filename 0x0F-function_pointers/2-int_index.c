#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to be searched
 * @size: size of the array
 * @cmp:  pointer to the function to be used to compare values
 * Return: size <= 0 or no matches , return -1 else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x = 0;

	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x == 1)
		{
			return (i);
		}
	}
	return (-1);
}
