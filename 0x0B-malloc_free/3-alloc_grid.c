#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates two dimensional array
 * @width: first array
 * @height: second dimension
 *
 * Return: pointer array
 */

int **alloc_grid(int width, int height)
{
	int **square;
	int count1;
	int count2;

	if (width <= 0 || height <= 0)
		return (NULL);
	square = malloc(sizeof(int *) * height);
	if (square == NULL)
		return (NULL);
	for (count1 = 0; count1 < height; count1++)
	{
		square[count1] = malloc(sizeof(int) * width);
		if (square[count1] == NULL)
			{
				for (count2 = 0; count2 < count1; count2++)
					free(square[count2]);
			free(square);
			return (NULL);
			}
		for (count2 = 0; count2 < width; count2++)
			square[count1][count2] = 0;
	}
	return (square);
}
