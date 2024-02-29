#include "main.h"

/**
 * _puts- print strings to the stdout
 * @str: the string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char *i;

	for (i = str; *i != '\0'; i++)
		_putchar(*i);
	_putchar('\n');
}
