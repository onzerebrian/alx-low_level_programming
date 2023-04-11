#include "main.h"
#include <stdlib.h>

/**
 * _strdup-  returns a pointer to a new string
 * @str: string pointer
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i;
	char *x;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	x = malloc(len + 1);
	for (i = 0; i <= len; i++)
	{
		x[i] = str[i];
	}
	}
	return (x);
}
