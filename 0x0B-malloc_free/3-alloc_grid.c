#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - function that returns a pointer to 2D array of int
* @width: number of columns
* @height: number of rows
* Return: return a pointer to the array otherwise return NULL
*/

int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);
<<<<<<< HEAD

	ptr1 = (int *)malloc(sizeof(int) * width);
	ptr2 = (int **)malloc(sizeof(ptr1) * height);
	if (ptr == NULL)
=======
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
>>>>>>> 6b49af5f5c9e441e07c291fc7869269fba444f0a
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
