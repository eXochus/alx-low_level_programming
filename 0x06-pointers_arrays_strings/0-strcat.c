#include "main.h"

/**
 * _strcat - concatenates two stings
 * @dest: string to be added to
 * @src: strng to be added
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
