#include "lists.h"

/**
 * pop_listint- main function deletes the head node of a listint_t
 * @head: pointer to head pointer
 * Return:  head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int i;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	i = (*head)->n;
	t = (*head);
	*head = (*head)->next;
	free(t);
	
	
	return (i);
}
