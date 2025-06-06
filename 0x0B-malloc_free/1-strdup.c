#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create a copy of a given array
 * @str: the given array
 *
 * Return: pointer array
 */

char *_strdup(char *str)
{
	char *create;
	int size;
	int count;

	size = _strlen(str);
	if (size == 0)
		return (NULL);
	create = malloc(sizeof(char) * size);
	if (create == NULL)
		return (NULL);
	for (count = 0; count <= size; count++)
		create[count] = str[count];
	return (create);
}

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	char *i;
	int count;

	count = 0;
	for (i = s; *i != '\0'; i++)
		count++;

	return (count);

}
