#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates new dog from the given parameters
 * @name: of dog to be created
 * @age: age of dog to be created
 * @owner: of dog to be created 
 *
 * Return: dog instance
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	char *namem;
	char *ownerm;

	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);
	namem = malloc(sizeof(char) * strlen(name) + 1);
	if (namem == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	ownerm = malloc(sizeof(char) * strlen(owner) + 1);
	if (ownerm == NULL)
	{
		free(the_dog);
		free(namem);
		return (NULL);
	}
	namem = strcpy(namem, name);
	ownerm = strcpy(ownerm, owner);
	the_dog->name = namem;
	the_dog->age = age;
	the_dog->owner = ownerm;

	return (the_dog);
}
