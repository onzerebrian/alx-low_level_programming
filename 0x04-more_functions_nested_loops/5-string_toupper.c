#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to upper
 * @str: string pointer
 * Return: returns the string
 */

char *string_toupper(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
	{
		x = str[i];
		if (x >= 97 && x <= 122)
		{
			x = x - 32;
		}
		str[i] = x;
	}

	return (str);
}
