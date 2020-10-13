#include "holberton.h"
#include <stdlib.h>
/**
* *free_grid- Frees a 2D array of ints
* @grid: 2D array of ints to be freed
* @height: height of grid
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
