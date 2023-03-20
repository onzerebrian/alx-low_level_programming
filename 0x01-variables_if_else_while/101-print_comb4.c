#include <stdio.h>

/**
 * main - This is where the program begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int k;

	for (m = 0; m < 10; m++)
	{
		n = m + 1;
		for (n = n; n < 10; n++)
		{
			k = n + 1;
			for (k = k; k < 9; k++)
			{
			putchar ('0' + m);
			putchar ('0' + n);
			putchar ('0' + k);

			if (k < 8)
			{
				putchar (',');
				putchar (' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}

