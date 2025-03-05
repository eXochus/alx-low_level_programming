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
	int j;
	int result;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (s1[i - 1] == s2[j - 1])
		result = 0;
	else
		result = s2[j - 1] - s1[i - 1];
	return (result);
}
