#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- main function deletes the head node of a listint_t
 * @head: pointer to head pointer
 * Return:  head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *t, *m;
	int i;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	m = *head;
	i = m->n;
	t = m;
	*head = m->next;
	free(t);
	
	
	return (i);
}
