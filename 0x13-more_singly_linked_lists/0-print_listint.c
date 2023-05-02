#include "lists.h"

/**
 * print_listint - prints the list
 * @h: pointer to first element
 * Return: number of modes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int m;

	if (h == NULL)
	{
		return (0);
	}
	for (m = 0; h != NULL; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);

}
