#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0, len2 = 0;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	x = malloc(len1 + len2 + 1);
	for (i = 0; i < len1; i++)
	{
		x[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		x[len1 + i] = s2[i];
	}
	return (x);

}
