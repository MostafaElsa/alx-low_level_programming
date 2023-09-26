#include <stdio.h>
#include "lists.h"

/**
 * add_node - functionn
 *
 * @head: pointer for pointer for head
 * @str: string to add in new node
 * Return: address of the element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		exit(0);
	new->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
