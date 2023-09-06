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
}
