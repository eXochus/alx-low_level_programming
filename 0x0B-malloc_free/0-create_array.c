#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initializes to a certain character
 * @size: the number of charater
 * @c: the character to initialized it to
 *
 * Return: pointer array
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int count;

	if (size == 0)
		return (NULL);
	create = malloc(sizeof(char) * size);
	for (count = 0; count <= size; count++)
		create[count] = c;
	return (create);
}
