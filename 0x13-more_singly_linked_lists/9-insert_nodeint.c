#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - functionn
 *
 * @head: pointer for head
 * @idx: index of new node
 * @n: the number to added
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *m = *head, *temp = *head, *new;

	while (idx)
	{
		m = temp;
		temp = temp->next;
		if (!temp)
			return(NULL);
		idx--;
	}
	new = malloc(sizeof(listint_t));
	m->next = new;
	new->n = n;
	new->next = temp;
	return (m);
}
