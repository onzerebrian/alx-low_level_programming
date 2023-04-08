#include "main.h"

/**
 * _strchr- a function that locates a character in a string.
 * @s: string pointer
 * @c: character to be located in the string
 * Return: Address of c or null
 */
char *_strchr(char *s, char c)
{
	int i;
	char *x;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
		x = &s[i];
		return (x);
		}
	}
	return (0);
}

