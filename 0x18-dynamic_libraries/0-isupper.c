#include "main.h"

/**
 * _isupper - prints if the characters are lowercase or not
 * 0 for lowercase 1 for uppercase
 * @c: the character being tested
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
/**
* *_strcat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* Return: returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
/**
 * _isdigit - returns if the character is a digit or not
 * @c: the character being tested
 * Return: 1 for a digit, 0 for not a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * _memcpy - copies from the src to the dest
 * @dest: the dest
 * @src: the src
 * @n: the amount to be copied
 * Return: the altered dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
