#include "main.h"

/**
 * _strspn - returns number of bytes in the initial sengment s
 * @s: for the count action
 * @accept: parameter for char
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
	        {
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
