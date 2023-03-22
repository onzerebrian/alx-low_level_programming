#include "stdio.h"

/**
 * print_to_98 - prints all numbers from the given number to 98
 * @n: -s the input number
 * Return: 0 when successful
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
			printf("98");
	} else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
			printf("98");
	}
	printf("\n");
}
