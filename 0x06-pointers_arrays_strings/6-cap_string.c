#include "main.h"

/**
 * cap_string - changes the start of each word of a string to uppercase.
 * @s: string to be changed
 *
 * Return: return array of strings
 */
char *cap_string(char *s)
{
	int i;
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			for (j = 97; j <= 122; j++)
			{
				if (s[i + 1] == j)
					s[i + 1] = s[i + 1] - 32;
				else
					s[i + 1] = s[i + 1];
			}
		}
	}
	return (s);
}
