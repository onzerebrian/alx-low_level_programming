#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - displays the sum of all arguments
 * @n: the number of arguments
 * Return: returns 0 if n = 0 else the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int m = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (; i < n; i++)
		m += va_arg(ap, int);

	va_end(ap);
	return (m);
}
