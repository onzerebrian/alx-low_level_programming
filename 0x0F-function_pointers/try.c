#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[])
{
	printf("%d\n", argv);
	
	int i;
	for (i = 0; i < argv; i++)
		printf("%s\n", (argc[i]));
	return (0);
}
