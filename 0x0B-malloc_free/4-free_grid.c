#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @grid: an array of 2 dimensional grid
 * @height: height of grid
 * Return: nothing
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
