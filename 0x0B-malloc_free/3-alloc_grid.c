#include "main.h"
/**
 *alloc_grid - initializes a 2D array with each element being 0
 *@width: number of columns
 *@height: number of rows
 *
 *
 *Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **a, j = 0, i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the array of row pointers.*/
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	/* Allocate memory for each row.*/
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			/**
			 * If memory allocation for a row fails,
			 * free previously allocated memory and return NULL.
			 */
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		/* Initialize elements of the row to 0.*/
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}

