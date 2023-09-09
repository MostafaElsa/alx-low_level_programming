#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  * _calloc - check the malloc
 *   *
 *    * @nmemb: number of elements of array
 *     * @size: size of element
 *      * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr = malloc(size * nmemb);
	char *x = ptr;

	if (nmemb == 0 || size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(x + i) = 0;
	return (ptr);
}
