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
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
