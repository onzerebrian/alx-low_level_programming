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
	listint_t *t, *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
		new->n = n;
		new->n = NULL;
		return (new)
	t = *head;
	for (i = 0; t != NULL; i++)
		t = t->next;
	t = new;
	new->next = NULL;
	new->n = n;

	return (new);
}
