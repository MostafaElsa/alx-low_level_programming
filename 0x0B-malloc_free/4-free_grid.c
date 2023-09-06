<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - function that free 2D array of int
* @grid: pointer to pointers of 1D array of int
* @height: number of rows
*/

void free_grid(int **grid, int height)
{
  int i;

  for (i = 0; i < height; i++)
  {
    free(grid[i]);
  }
  free(grid);
>>>>>>> 6b49af5f5c9e441e07c291fc7869269fba444f0a
}
