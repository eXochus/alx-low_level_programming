#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @s: string to be changed
 *
 * Return: return array of strings
 */

char *string_toupper (char *s)
{
	int i;
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			if (s[i] == j)
				s[i] = s[i] - 32;
			else
				s[i] = s[i];
		}
	}
	return (s);
}
