#include <stdio.h>
#include "lists.h"

/**
 * free_listint - functionn
 *
 * @head: pointer for pointer for head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
