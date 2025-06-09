#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array and initializes to a certain character
 * @min: minmum number to start with
 * @max: number to end with
 *
 * Return: pointer to integer array
 */

int *array_range(int min, int max)
{
	int *array_range;
	int count;
	int array_size;

	if (min > max)
		return (NULL);
	array_size = (max - min) + 1;
	array_range = malloc(sizeof(int) * array_size);
	if (array_range == NULL)
		return (NULL);
	for (count = 0; count < array_size; count++)
	{
		array_range[count] = min;
		min++;
	}
	return (array_range);
}
