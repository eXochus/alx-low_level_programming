#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - create an array and initializes to a certain character
 * @s1: first string
 * @s2: second string
 * @n: number of string to copy from s2
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int size;
	unsigned int size2;
	int count1;
	unsigned int count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = _strlen(s1);
	size2 = _strlen(s2);
	concat = malloc(sizeof(char) * (size + n + 1));
	if (concat == NULL)
		return (NULL);
	for (count1 = 0; count1 < size; count1++)
		concat[count1] = s1[count1];
	if (size2 <= n)
	{
		for (count2 = 0; count2 < size2; count2++, count1++)
			concat[count1] = s2[count2];
	}
	for (count2 = 0; count2 < n; count2++, count1++)
		concat[count1] = s2[count2];
	concat[count1] = '\0';
	return (concat);
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
