#include "main.h"

/**
 * rev_string - prints the reverse version of a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */

void rev_string(char *s)
{
	int length;
	int i;
	int j;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
