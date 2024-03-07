#include "main.h"

/**
 * rev_string - prints the reverse version of a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
		s[j - 1] = j;

}
