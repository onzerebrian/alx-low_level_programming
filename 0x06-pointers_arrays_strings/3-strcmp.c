#include "main.h"

/**
 * _strcmp - a function tha compares two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: returns the diference
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int i = 0;


	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] == s2[i])
	{
		x = 0;
	}
	else
	{
		x = s1[i] - s2[i];
			break;
	}
	i++;
	}


	return (x);
}
