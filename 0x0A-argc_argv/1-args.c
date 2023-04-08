#include "main.h"
#include <stdio.h>


/**

 * main - start of the program

 *

 * @argc: the number of argunments

 *

 * @argv: the arguments enterred

 *

 * Return: returns 0 to mean success

 */



int main(int argc, char* argv[])
{

	int x;

	if (argv[0])
	{
	x = argc - 1;

	printf("%d\n", x);
	}
	return (0);
}
