#include <stdio.h>
#include "lists.h"

/**
 * free_list - functionn
 *
 * @head: pointer for pointer for head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head->next)
	{
		temp = head->next;
		free(head->next);
		free(head->str);
		head = temp;
	}
	free(temp);
}
