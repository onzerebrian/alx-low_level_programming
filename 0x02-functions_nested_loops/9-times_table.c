#include <stdio.h>

/**
 * times_table - the function produces the multiplication table print out
 *
 * @a: first loop
 * @b: second loop
 * @c: third loop
 *
 * Return: 0 for success
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		c = 0;
		for (b = 0; b < 9; b++)
		{
			if (c < 10)
			{
				printf(" %d, ", c);
			} else
			{
				printf("%d, ", c);
			}
				c = c + a;
			}
			if (c < 10)
			{
				printf(" %d", c);
			} else
			{
			printf("%d", c);
			}
	c = c + a;
	printf("\n");
	}
}
