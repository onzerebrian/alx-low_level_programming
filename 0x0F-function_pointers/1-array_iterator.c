#include "function_pointers.h"

/**
 * array_iterator- function
 * @size:  is the size of the array
 * @array: array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

