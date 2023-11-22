#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - functionn
 *
 * @head: pointer for pointer for head
 * @n: number to add in new node
 * Return: address of the element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

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
