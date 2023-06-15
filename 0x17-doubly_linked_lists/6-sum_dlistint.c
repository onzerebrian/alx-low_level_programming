#include "lists.h"

/**
 * sum_dlistint - function
 * @head: pointer
 * Return: return value
 */
int sum_dlistint(dlistint_t *head)
{

	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
