#include "lists.h"

/**
 * get_dnodeint_at_index - funtcion
 * @head: pointer
 * @index: index
 * Return: return value
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *x;
	unsigned int cont;

	cont = 0;
	x = head;

	if (head == NULL)
		return (NULL);

	while (index != cont)
	{
		if (x == NULL)
			return (NULL);
		x = x->next;
		cont++;
	}
	return (x);

}
