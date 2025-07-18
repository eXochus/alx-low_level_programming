#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @s: string whose length is to be calculated
 *
 * Return: the len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy - calculate the length of a string
 * @dest: string whose length is to be calculated
 * @src: string to copy from
 *
 * Return: the len
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - calculate the length of a string
 * @name: string whose length is to be calculated
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: the len
 */
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
