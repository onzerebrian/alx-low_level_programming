#include "main.h"

/**
 * _strncpy - function that copies string to buffer
 * @dest: destinationnpointer
 * @src: source pointer
 * @n: number of bytes copied
 * Return: returns the content of the dest buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

