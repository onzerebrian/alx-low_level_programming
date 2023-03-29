#include "main.h"

/**
 * _strncat - main function that copies src to the end of dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to be printed
 * Return: returns the combine strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while ((dest[i]) != '\0')
	{
		len = len + 1;
		i++;
	}

	for (i = 0; i < n && (src[i]) != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
