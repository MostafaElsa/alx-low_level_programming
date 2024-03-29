#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - functionn
 *
 * @head: pointer for head
 * @index: number of node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	if (!head)
		return (NULL);
	while (index)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
		index--;
	}
	return (temp);
}
