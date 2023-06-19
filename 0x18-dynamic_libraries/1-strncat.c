#include "main.h"

/**
* *_strncat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* @n: how much of src is being added to dest
* Return: returns the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}

/**
 * _atoi - convert string to numbers
 *
 * Return: n
 */
int _atoi(void)
{
	/* int x; */
	/* char arr[]; */

	/* while (*s) */
	/* { */
	/* x++; */
	/* if (*s >= 48 && *s <= '9') */
	/* conv[i] = *s */
	/* } */

	return (0);
}

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if not found, otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strlen_recursion - counts the length of a string
 * @s: the string
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

