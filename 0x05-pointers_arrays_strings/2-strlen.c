#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = s; i != '\0'; i++)
		count++;

	return (count);

}
