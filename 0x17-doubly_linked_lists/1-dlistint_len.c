#include "lists.h"

/**
 * dlistint_len - function
 * @h: pointer to first node
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
