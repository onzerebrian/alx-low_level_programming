#include "main.h"

/**
 * rot13- a function that encodes a string using rot13.
 * @s: string pointer
 * Return: returns the encooded string
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char n1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
	for (i = 0; i < 52; i++)
	{
	if (s[j] == n1[i])
	{
	s[j] = n2[i];
	break;
	}
	}
	}
	return (s);
}
