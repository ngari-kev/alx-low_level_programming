#include "main.h"
/**
 *free_grid - frees a 2D array created previously
 *@grid: pointer to pointer to 1st element
 *@height: number of rows
 *
 *
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
