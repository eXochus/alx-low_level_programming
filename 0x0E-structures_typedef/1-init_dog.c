#include "dog.h"

/**
 * init_dog - initializes dog members
 * @d: not known yet
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
