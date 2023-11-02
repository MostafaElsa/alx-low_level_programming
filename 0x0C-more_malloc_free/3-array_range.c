#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - return pointer to array ranged from min to max
 *
 * @min: small int
 * @max: largest int
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	unsigned int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
