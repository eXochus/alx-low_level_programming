#include "main.h"

/**
 * _puts- print strings to the stdout
 * @s: the string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char *i;

	count = 0;
	for (i = str; *i != '\0'; i++)
		_putchar(*i);
	_putchar('\n');
}
