#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: pointer
 * @idx: idx
 * @n: n
 * Return: return value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new, *ant, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(*h));
	if (new == NULL)
		return (NULL);
	new->n = n;
	i = 0;
	if (!*h)
	{
		new->next = NULL;
		*h = new;
		return (new);
	}
	ant = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < (idx - 1))
	{
		ant = ant->next;
		i++;
		if (ant == NULL && i < (idx - 1))
			return (NULL);
	}
	if (ant->next == NULL)
		return (add_dnodeint_end(&ant, n));
	temp = ant;
	new->next = temp->next;
	new->n = n;
	new->next = new;
	return (new);

}
