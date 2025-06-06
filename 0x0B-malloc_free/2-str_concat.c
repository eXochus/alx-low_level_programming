#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate to
 * @s2: string to concatenate
 *
 * Return: pointer array
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size1;
	int size2;
	int count1;
	int count2;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (size1 == 0)
		s1 = "";
	if (size2 == 0)
		s2 = "";
	concat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concat == NULL)
		return (NULL);
	for (count1 = 0; count1 < size1; count1++)
		concat[count1] = s1[count1];
	for (count2 = 0; count2 <= size2; count2++)
	{
		concat[count1] = s2[count2];
		count1++;
	}
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
