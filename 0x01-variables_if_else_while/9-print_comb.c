#include <stdio.h>

/**
 * main - This is where the program begins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;


	for (m = 0; m < 10; m++)
	{
		putchar ('0' + m);
		putchar (',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
