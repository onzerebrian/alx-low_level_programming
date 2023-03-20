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

	for (m = 0; m < 10; m++)
	{
		n = m + 1;
		for (n = n; n < 10; n++)
		{
			putchar ('0' + m);
			putchar ('0' + n);

			if (m < 8)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

