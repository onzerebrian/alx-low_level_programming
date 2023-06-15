#include "lists.h"

/**
 * free_dlistint - function
 * @head: pointer
 * Return: return value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
	free(head);

}
