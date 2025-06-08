#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free two dimensional array
 * @grid: array to be freed
 * @height: dimension of the array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
		free(grid[count]);
	free(grid);
}
