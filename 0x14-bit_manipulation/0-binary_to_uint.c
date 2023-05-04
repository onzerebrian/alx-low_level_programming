#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to int
 * @b: pointer to input char string
 * Return: the converted int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0, p = 1, j = 0;
	unsigned int i, len = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}
	if (len == 1 && b[0] == '0')
		return (0);
	if (len == 1 && b[0] == '1')
		return (1);
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' || b[i] != '1')
		return (0);
	j = len - 1;
	for (; j > 0; j--)
	{
		p *= 2;
	}
	len--;
	r += (p * (b[i] - 48));
	p = 1;
	}
	return (r);

}
