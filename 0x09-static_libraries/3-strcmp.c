#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string to be compared
 * @s2: strng to be compared to
 *
 * Return: return an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == '\0' && s2[i] == '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
