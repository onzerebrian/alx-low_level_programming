#include <stdio.h>
#include <stdlib.h>

/**
 * main- the strat of th eprogram
 * @argc: number of arguments
 * @argv: the pointer to arguments
 * Return: returns 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{
	int num;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (num = atoi(argv[1]); num > 0;)
	{
		if (num >= 25)
		{
		coins += num / 25;
		num = num % 25;
		}
		else if (num >= 10 && num < 25)
		{
		coins += num / 10;
		num = num % 10;
		}
		else if (num >= 5 && num < 10)
		{
		coins += num / 5;
		num = num % 5;
		}
		else if (num >= 2 && num < 5)
		{
		coins += num / 2;
		num = num % 2;
		}
		else
		{
		coins += num / 1;
		num = num % 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
