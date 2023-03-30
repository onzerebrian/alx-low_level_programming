#include "main.h"

/**
 * cap_string - function for title case
 * @str: string pointer
 * Return: returns the convertred string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}' ||
	i == 0)
	{
		str[i] = str[i] - 32;
	}
	}
	i++;
	}
	return (str);
}
