#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create 2D array initialized to 0
 * @width: the 1st Dim
 * @height: the 2nd Dim
 * Return: pointer to 2Dim array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, *ptr1, **ptr2;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr1 = (int*)malloc(width * sizeof(int));
	ptr2 = (int **)malloc(height * sizeof(ptr));
	if (ptr1 == NULL || ptr2 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*ptr2[j] = 0;
			ptr2++;
		}
	}
	return (ptr2);
}
