#include "main.h"
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
	int m = 0;

	if (argc ==  1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
			m += atoi(argv[i]);
			}
			else
			{
			printf("Error\n");
			return (1);
			}
		}
		printf("%d\n", m);
	}
	return (0);
}
