#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: the first integer pointer
 *
 * @b: the second integer pointer
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
