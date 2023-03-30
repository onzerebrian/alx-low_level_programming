#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: strign pointer
 * Return: returns the encoded string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char n[10] = {'a', 'e', 'o', 't', 'l', '4', '3', '0', '7', '1'};

	for (i = 0; i < 5; i++)
	{
	for (j = 0; s[j] != '\0'; j++)
	{
	if (s[j] == n[i] || s[j] == (n[i] - 32))
	{
	s[j] = n[i + 5];
	}
	}
	}
	return (s);
}
