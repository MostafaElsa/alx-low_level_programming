#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - functionn
 *
 * @head: pointer for head
 *
 * Return: the sum of nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (!temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
