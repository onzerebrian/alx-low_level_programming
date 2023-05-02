#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  a function that frees a list
 * @head: head pointer
 */

void free_listint(listint_t *head)
{
	unsigned int i;

	listint_t *temp, *m;
	temp = head;

	for (i = 0; temp->next != NULL; i++)
	{
		m = temp;
		temp = temp->next;
		free(m);
	}

}
