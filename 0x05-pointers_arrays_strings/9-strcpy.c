#include "main.h"

/**
 * _strcpy - copies a string from a pointer to a buffer
 * @dest: buffer to be copied to
 * @src: source of the string to be copied
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
