#include <stdio.h>
#include "lists.h"

/**
 * list_len - functionn
 *
 * @h: pointer for head
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
		n++;
	return (n);

}
