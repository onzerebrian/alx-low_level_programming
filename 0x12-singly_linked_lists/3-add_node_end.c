#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head pointer
 * @str: string pointer
 * Return: pointer to string
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *m;
	list_t *t = *head;

	while (str[i])
	{
		i++;
	}
	m = malloc(sizeof(list_t));
	if (!m || m == NULL)
	{
		return (NULL);
	}
	m->len = i;
	m->str = strdup(str);
	m->next = NULL;
	if (*head == NULL)
	{
		*head = m;
		return (m);
	}
	while (t->next)
		t = t->next;
	t->next = m;
	return (m);

}
