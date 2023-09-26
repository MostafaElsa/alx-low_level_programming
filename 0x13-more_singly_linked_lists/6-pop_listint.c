#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - functionn
 *
 * @head: pointer for pointer for head
 */

int pop_listint(listint_t **head)
{
	int n;

	if (!head)
		return (0);
	n = *head->n;
	*head = *head->next;
	return (n);
}
