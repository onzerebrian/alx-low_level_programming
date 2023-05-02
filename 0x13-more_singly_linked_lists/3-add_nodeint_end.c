#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - main function adds a new node at the end
 * @head: pointer to the head pointer
 * @n: new node element to be added
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	unsigned int i;
	listint_t *t;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	t = *head;
	new->next = NULL;
	new->n = n;

	if (t == NULL)
	{
		return (new);
	}
	for (i = 0; t->next != NULL; i++)
		t = t->next;
	t->next = new;
	return (new);
}
