#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node
 * @head: head pointer
 * @str: string pointer
 * Return: address of the new element
 */


list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *m;

	while(str[i])
	{
		i++;
	}
	

	m = malloc(sizeof(list_t));
	if (!m)
	{
		return (NULL);
	}
	m->len = i;
	m->str = strdup(str);
	m->next = (*head);
	(*head) = m;

	return (*head);
}
