#include "main.h"

/**
 * reverse_array - a function that reverses
 * @a: string pointer
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x[1] = {0};
	int t;

	t = n;
	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n + 1) / 2;
	}

	for (i = 0; i < n; i++)
	{
		x[0] = a[i];
		a[i] = a[t - 1 - i];
		a[t - 1 - i] = x[0];
	}
}
