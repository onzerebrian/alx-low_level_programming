#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - the function
 * @separator: separator
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *x;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (separator == NULL)
		{
			continue;
		} else
			if (i != (n - 1))
			{
			printf("%s", separator);
			}
	}

	printf("\n");
	va_end(ap);
}
