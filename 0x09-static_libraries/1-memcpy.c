#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination  pointer
 * @src: source string pointer
 * @n: number of bytes copied
 * Return: destination pointer (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		dest[i] = src[i];
	}
	return (dest);
}

