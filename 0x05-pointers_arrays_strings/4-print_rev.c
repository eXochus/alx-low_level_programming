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

	for (i = s; *i != '\0'; i++)
		_putchar(*i);
}
