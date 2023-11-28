#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - functionn
 *
 * @head: pointer for pointer for head
 * @str: string to add in new node
 * Return: address of the element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new->next = NULL;
	new->len = i;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
