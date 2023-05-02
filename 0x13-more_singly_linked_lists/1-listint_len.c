#include "lists.h"

/**
 * listint_len - main
 * @h: pointer to first element
 * Return: number of modes
 */

size_t listint_len(const listint_t *h);
{
	unsigned int m;

	if (h == NULL)
	{
		return (0);
	}
	for (m = 0; h != NULL; m++)
	{
		h = h->next;
	}
	return (m);

}
