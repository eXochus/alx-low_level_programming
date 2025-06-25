#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog from the given parameters
 * @name: of dog to be created
 * @age: age of dog to be created
 * @owner: of dog to be created 
 *
 * Return: dog instance
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *the_dog;
	char *namem;
	char *ownerm;
	int namel;
	int ownerl;

	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);
	namel = _strlen(name);
	namem = malloc(sizeof(char) * namel + 1);
	if (namem == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	ownerl = _strlen(owner);
	ownerm = malloc(sizeof(char) * ownerl + 1);
	if (ownerm == NULL)
	{
		free(the_dog);
		free(namem);
		return (NULL);
	}
	_strcpy(namem, name);
	_strcpy(ownerm, owner);
	the_dog->name = namem;
	the_dog->age = age;
	the_dog->owner = ownerm;

	return (the_dog);
}
