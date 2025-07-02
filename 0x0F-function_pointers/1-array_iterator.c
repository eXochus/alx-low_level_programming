#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - apply called function on each element of given array
 * @array: array to be given
 * @size: size of the array
 * @action: the function to be called
 *
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter;

	if (array == NULL)
	{
		;
	}
	if (action == NULL)
	{
		;
	}
	for (counter = 0; counter < size; counter++)
		action(array[counter]);
}
