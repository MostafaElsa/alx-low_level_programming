#include <stdio.h>
#include "lists.h"

/**
 * print_listint - functionn
 *
 * @h: pointer for head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%lu\n", h->n);
		h = h->next;
		len++;
	}
	return (len);

}
