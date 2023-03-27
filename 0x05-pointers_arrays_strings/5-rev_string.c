#include "main.h"

/**
 * rev_string - reverses the string
 *
 * @s: string pointer
 */

void rev_string(char *s)
{
	int n, i = 0, l = 0;
	int y = 0;
	int x[10000];

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	l--;
	for (n = l; n >= 0; n--)
	{
		x[y] = s[n];
		y++;
	}
	for (n = 0; n < y;  n++)
	{
		s[n] = x[n];
	}

}
