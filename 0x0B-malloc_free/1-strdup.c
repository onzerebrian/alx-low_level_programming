#include "main.h"
#include <stdlib.h>

/**
 * _strdup-  returns a pointer to a new string
 * @str: string pointer
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *x
	int i = 0
	int m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0';i++)
	{
	x = malloc(sizeof(char) * (i + 1));
	}
	if (x == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{
		x[rm] = str[m];
	}
	return (x);
}
