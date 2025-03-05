#include "main.h"

/**
 * _strncpy - concatenates two stings
 * @dest: string to be added to
 * @src: strng to be added
 * @n: the number of string to be used in src
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; src[j] != '\0'; j++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (n >= j)
		dest[i] = '\0';
	return (dest);
}
