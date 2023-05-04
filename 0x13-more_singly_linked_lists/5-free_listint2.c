#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  a function that frees a list
 * @head: head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *t;
	unsigned int i;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	for (i = 0; (*head)->next != NULL; i++)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	free(*head);
	*head = NULL;
}
