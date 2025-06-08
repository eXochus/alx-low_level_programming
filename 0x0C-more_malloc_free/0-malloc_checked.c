#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - create an array and initializes to a certain character
 * @b: number of needed spaces
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);
	if (checked == NULL)
		exit(98);
	return (checked);
}
