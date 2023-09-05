#include "main.h"
/**
 * free_grid - A functiom that frees a 2-dimensional grid
 * created
 * @grid: the address of the 2-dimensional grid
 * @height: the grid's height
 *
 * Return: Nothing
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
