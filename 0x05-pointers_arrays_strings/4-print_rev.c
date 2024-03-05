#include "main.h"

/**
 * print_rev- print strings to the stdout in reverse order
 * @s: the string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char *i;
	char *j;

	for (i = s; *i != '\0'; i++)

	for (j = i -1; j >= s; j--)
		_putchar(*j);
	_putchar('\n');
}
