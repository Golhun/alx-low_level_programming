#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * Description: Function returns a pointer to a 2d array of integers
 * @width: integer
 * @height: integer
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (x = 0; x < i; x++)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			grid[i][x] = 0;
		}
	}
	return (grid);
}
