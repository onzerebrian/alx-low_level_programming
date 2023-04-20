#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: separator
 * @n: the number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
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
