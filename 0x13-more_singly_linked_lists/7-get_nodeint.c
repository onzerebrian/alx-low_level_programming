#include "lists.h"

/**
 * get_nodeint_at_index - main function
 * @head: head pointer
 * @index: nth node of a listint_t linked list.
 * Return: the nth node
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index ; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}
