#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  a function that frees a list
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	unsigned int i;
	listint_t *m;

	if (head == NULL)
		return;
	for (i = 0; head->next != NULL; i++)
	{
		m = head->next;
		free(head);
		head = m;
	}

}
