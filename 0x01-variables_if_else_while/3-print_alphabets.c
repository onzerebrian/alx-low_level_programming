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
		putchar (m);
	}
        for (m = 'A'; m <= 'Z'; m++)
        {
                putchar (m);
        }
	putchar('\n');
	return (0);
}
