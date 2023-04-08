#include "main.h"
#include <stdio.h>

/**
 * main - the start of the program
 *
 * @argc: number of arguments passed
 *
 * @argv: a poiter to the arguments passed
 *
 * Return: returns 0 when successful
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
