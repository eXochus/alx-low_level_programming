#include "main.h"

/**
 * swap_int - takes adress of array and update
 * @a: the first parameter to be swapped
 * @b: the second parameter to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
