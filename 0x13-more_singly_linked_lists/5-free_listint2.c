#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  a function that frees a list
 * @head: head pointer
 */

void free_listint2(listint_t **head)
{
	unsigned int i;
	listint_t *m, *l;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	for (i = 0; (*head)->next != NULL; i++)
	{
		m = (*head)->next;
		free(*head);
		*head = m;
	}
	free(*head);

}
