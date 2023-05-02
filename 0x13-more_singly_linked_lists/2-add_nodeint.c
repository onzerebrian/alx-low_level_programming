#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - main function
 * @head: pointer to the head pointer
 * @n: node value to be added
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;

	return (new);
}
