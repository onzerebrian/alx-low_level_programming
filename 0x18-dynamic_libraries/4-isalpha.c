#include "main.h"

/**
* _isalpha - returns 1 or 0
* depending on if the character is capitalized or not.
* @c: the character that is looked at.
* Return: Returns 1 if capital, 0 if not.
*/
int _isalpha(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the bytes
 * Return: Where the bytes start to be found, or Null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, k, pos, Z = 0;

	for (i = 0; s[i] != '\0'; i++)
		;

	pos = i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
			{
				if (k <= pos)
				{
					pos = k;
					Z = 1;
				}
			}
		}
	}
	if (Z == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (haystack == '\0' || needle == '\0')
		return (0);
	for (; *haystack; haystack++)
	{

	for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++)
		;
	if (*n == '\0')
		return (haystack);
	}
	return (0);
}

/**
* _abs - returns the absolute value of an integer
* @n: the integer you want the absolute value of
* Return: Returns the absolute value of n
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	if (n < 0)
	{
		return ((n * -1));
	}
	return (0);
}

/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte \0, to the buffer pointed to by dest.
 * @dest: the buffer
 * @src: string being copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cpyresult = dest;

	if ((dest != '\0') && (src != '\0'))
	{
		while (*src != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (cpyresult);
}
