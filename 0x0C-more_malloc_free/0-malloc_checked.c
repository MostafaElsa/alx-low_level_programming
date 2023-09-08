#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the malloc
 *
 * @b: size of allocated memory
 * Return: pointer of the allocated memory if success or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr, *x;

	x = malloc(1);
	x = (void *)0x98;
	ptr = malloc(b);
	if (ptr == NULL)
		return (x);
	return (ptr);
}
