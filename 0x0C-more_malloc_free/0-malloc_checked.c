#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- function that allocates memory using malloc.
 * @b: size of bytes
 * Return: pointer on success
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;
	unsigned int n = 98;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	ptr = &n;
	return (ptr);
	}
	else
	{
	return (ptr);
	}
}
