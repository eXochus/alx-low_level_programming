#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the member elements of dog
 * @d: instances of dog
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
