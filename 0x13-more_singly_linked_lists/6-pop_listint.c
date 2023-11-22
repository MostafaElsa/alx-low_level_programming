#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - functionn
 *
 * @head: pointer for pointer for head
 * Return: number in head
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!head)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
