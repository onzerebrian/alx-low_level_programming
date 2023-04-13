#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int n1, n2, x;


	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n >= n2)
	{
	x = n1 + n2;
	}
	else
	{
	x = n1 + n;
	}
	ptr = malloc(x);
	for (i = 0; i < n1; i++)
	{
	ptr[i] = s1[i];
	}

	for (i = n1; i <= x; i++)
	{
	*(ptr + i) = s2[i - n1];
	}
	
	return (ptr);

}

