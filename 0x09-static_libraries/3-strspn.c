#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 *
 * @s: pointer to the initial segment string
 *
 * @accept: pointer to bytes to be checked
 *
 * Return: returns tha count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int m = 0;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		x = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
			m = i + 1;
			x++;
		}
		else if (x == 0 && s[i] != accept[j] && accept[j + 1] == '\0')
		{
			return (m);
		}
		}
	}
	return (m);
}
