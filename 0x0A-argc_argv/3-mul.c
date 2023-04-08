#include <stdio.h>
#include <stdlib.h>

/**
 * main - the start of the program
 *
 * @argc: numbe rof arguments
 *
 * @argv: the arguments passed
 *
 * Return: returns 0 when the program is successful
 */
int main(int argc, char *argv[])
{
	int i;
	int m = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
		printf("%d\n", m);
	}
	return (0);
}
