#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	int len;
	int i;
	len = 0;
	for (i = 0; i <= *s; i++)
		len++;

	return len;

}
