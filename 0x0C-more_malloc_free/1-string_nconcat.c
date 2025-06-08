#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - create an array and initializes to a certain character
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
	int count1;
	unsigned int count2;

	size = _strlen(s1);
	concat = malloc(sizeof(char) * (size + n + 1));
	if (concat == NULL)
		return (NULL);
	for (count1 = 0; count1 < size; count1++)
		concat[count1] = s1[count1];
	for (count2 = 0; count2 < n; count2++, count1++)
		concat[count1] = s2[count2];
	return (concat);
}


int _strlen(char *s)
{
	char *i;
	int count;

	count = 0;
	for (i = s; *i != '\0'; i++)
		count++;

	return (count);

}
