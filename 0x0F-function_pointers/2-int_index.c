#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for index of first instance
 * @array: array to be given
 * @size: size of the array
 * @cmp: the function to be called
 *
 * Return: returns the index of the first instance
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (counter = 0; counter < size; counter++)
		{
			if (cmp(array[counter]) != 0)
				return (counter);
		}
	}
	return (counter);
}
