#include "main.h"

/**
 * _memcpy - flush n bytes from src to dest
 * @src: string to flush from
 * @dest: string to flush to
 * @n: number of byte to be flush
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
