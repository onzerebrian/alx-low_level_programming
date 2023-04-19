#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: pointer to name
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return (NULL);
	f(name);

}
