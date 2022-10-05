#include "main.h"

/**
 * free_grid - Frees previously created grid
 * @grid: Grid width
 * @height: Grid height
 * Return: 0
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
