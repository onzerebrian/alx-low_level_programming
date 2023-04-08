#include "main.h"

/**
 * *_strcpy - function that copies string to another location
 * @dest: buffer pointer
 * @src: string pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, l = 0;

	while (src[i] != '\0')
	{
		l++;
		i++;
	}

	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

