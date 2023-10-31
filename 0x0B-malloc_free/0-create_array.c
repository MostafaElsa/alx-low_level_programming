#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array and initializes with specific char
 * @size: the size of the array
 * @c: the specific char to be printed
 *
 * Return: pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
