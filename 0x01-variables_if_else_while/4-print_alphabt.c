#include <stdio.h>

/**
 * main - This is where the program begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;


	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == 'q' || m == 'e')
		{
			continue;
		}
		putchar (m);
	}
	putchar('\n');
	return (0);
}
