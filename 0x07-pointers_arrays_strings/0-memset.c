#include "main.h"

/**
 * _memset - flush n bytes of s with b
 * @s: string to flush
 * @b: string to flush it with
 * @n: number of byte to be flush
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return (s);
}
