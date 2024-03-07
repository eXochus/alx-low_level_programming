#include "main.h"

/**
 * print_rev - prints the reverse version of a string
 * @s: the string to be reversed
 *
 * Return: returns nothing
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');

}
