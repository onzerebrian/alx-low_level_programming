#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 *
 * @haystack: pointer
 *
 * needle
 *
 * Return: a pointer to the beginning of the located substring,
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
