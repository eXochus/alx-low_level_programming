#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: instance of the dog to be freed
 *
 * Return: the len
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
