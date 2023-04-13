#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * Description: function frees a 2D grid previously created by alloc_grid().
 * @height: int
 * @grid: int
 *
 * Return: int
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
