#include <stdio.h>
#include "lists.h"

/**
 * listint_len - functionn
 *
 * @h: pointer for head
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);

}
