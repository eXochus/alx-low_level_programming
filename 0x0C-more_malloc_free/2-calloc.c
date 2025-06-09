#include "main.h"
#include <stdlib.h>

/**
 * _calloc - create an array and initializes to a certain character
 * @nmemb: for calloc
 * @size: maybe its dimension
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int count;
	unsigned char *arraychar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	arraychar = (unsigned char *)array;
	for (count = 0; count < (size * nmemb); count++)
	{
		arraychar[count] = 0;
	}
	return (array);
}
