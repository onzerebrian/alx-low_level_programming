#include "main.h"
#include <stdlib.h>

/**
 * _strdup-  returns a pointer to a new string
 * @str: string pointer
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *x;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	x = malloc(sizeof(char) * (len + 1));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
