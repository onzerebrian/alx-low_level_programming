#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: converted int
 */

int _atoi(char *s)
{
	int x = 0;
	int d = 0;
	int n = 0;
	int e = 0;
	int f = 0;
	int t = 0;

	while (s[e] != '\0')
		e++;

	while (x < e && f == 0)
	{
		if (s[x] == '-')
			++d;
		if (s[x] >= '0' && s[x] <= '9')
		{
		t = s[x] - '0';
		if (d % 2)
			t = -t;
		n = n * 10 + t;
		f = 1;
		if (s[x + 1] < '0' || s[x + 1] > '9')
			break;
		f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}
