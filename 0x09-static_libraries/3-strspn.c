#include "main.h"

/**
 * _strspn - finds the first occurence of series of character
 * @s: string to find the character from
 * @accept: character to find
 *
 * Return: the length in byte of the string accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int length;

	length = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] >= 97 && s[j] <= 122; j++)
		{
			if (accept[i] == s[j])
				length++;
		}
	}
	return (length);
}
