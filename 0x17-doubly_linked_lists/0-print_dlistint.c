#include "lists.h"

/**
 * print_dlistint - function
 * @h: Pointer to the head node of a linked list
 * Return: nodes on the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (i);
}
