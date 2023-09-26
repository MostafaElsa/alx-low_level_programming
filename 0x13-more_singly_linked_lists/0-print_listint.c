#include <stdio.h>
#include "lists.h"

/**
 * print_listint - functionn
 *
 * @h: pointer for head
 * Return: number of nodes
 */

size_t print_list(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%u", h->n);
		h = h->next;
		n++;
	}
	return (n);

}
