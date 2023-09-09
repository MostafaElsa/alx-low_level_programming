#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _realloc - check the malloc
 *
 * @ptr: pointer to allocated array
 * @old_size: size of allocated array
 * @new_size: new size of allocated memory
 * Return: pointer of the allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *x;

	if (ptr == NULL)
		return (NULL);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	x = malloc(old_size);
	ptr = malloc(new_size);
	ptr = x;
	return (ptr);
}

