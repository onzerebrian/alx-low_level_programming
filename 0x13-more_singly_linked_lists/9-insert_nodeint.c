#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - main function
 * @head: pointer to the head pointer
 * @idx: index
 * @n: value inserted
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0, i = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	for (; (*head) != NULL; i++)
	{
		j++;
		*head = (*head)->next;

	}
	if (idx > j)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	for (i = 0; (*head) != NULL; i++)
	{
		if (i == (idx + 1))
		{
			new->next = (*head)->next;
			*head = new;
		}
		*head = (*head)->next;
	}

	return (new);
}
