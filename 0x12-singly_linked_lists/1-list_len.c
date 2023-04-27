#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: list
 * Return:  number of elements in a linked
 */



size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;

	}
	return (i);
}
