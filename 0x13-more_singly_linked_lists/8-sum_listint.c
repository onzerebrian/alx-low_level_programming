#include "lists.h"

/**
 * sum_listint - main funtion sum of node elements
 * @head: head pointer
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	unsigned int i;

	if (head == NULL)
	{
		sum = 0;
	}
	for (i = 0; head->next != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
