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
	int i = 0, j = 0, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(width * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
