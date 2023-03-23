#include <stdio.h>

/**
 * main - the start of the program
 *
 * Return: 0 to mean success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
		printf("%d", i);
		}
		else
		{
		printf(" %d", i);
		}
	}
	putchar('\n');
	return(0);
}
