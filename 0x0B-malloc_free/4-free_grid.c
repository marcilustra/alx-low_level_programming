#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array from before.
 * @grid: int array.
 * @height: y
 *
 * Return: void (Succ)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
