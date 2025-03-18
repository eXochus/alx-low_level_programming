#include "main.h"

/**
 * _strchr - finds the first occurence of a character
 * @s: string to find the character from
 * @c: character to find
 *
 * Return: pointer to that character.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ((char *)0);
}
