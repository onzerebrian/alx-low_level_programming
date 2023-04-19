#include <stdio.h>
#include <stdlib.h>

/**
 * main: main function
 * @argc: arguments passed on runtime
 * @argv: number of argunments on runtime
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("error\n");
		exit(98);
	}
	if (atoi(argv[3]) == 0 && ((char*)argv[2] == "'%'" || (char *)(char*)argv[2] == "/"))
	{
		printf("you cant divide with zero");
		exit(99);
	}

	printf("passed\n");
		printf("%d\n", argc);

	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", (argv[i]));
	return (0);
}
