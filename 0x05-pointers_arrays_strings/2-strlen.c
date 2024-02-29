#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 *
 * Return: nothing
 */

int _strlen(char *s)
{
	char len[20] = *s;
	int i;
	int count;

	count = 0;
	for (i = len[0]; i == '\0'; i++)
		count++;

	return (count);

}
