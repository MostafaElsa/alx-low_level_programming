#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - functionn
 *
 * @head: pointer for pointer for head
 * @n: number to add in new node
 * Return: address of the element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int i = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
