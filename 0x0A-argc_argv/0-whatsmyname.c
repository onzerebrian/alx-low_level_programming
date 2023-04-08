#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - the start of the program
 * Return: returns 0 to mean success
 * @argc: number of arguments
 * @argv: the arguments
 */

int main(int argc, char *argv[])
{
	int i = 0;
	char *x = argv[0];

	if (argc >= 0)
	{
	for (; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
	}
	_putchar('\n');

	return (0);
}
