#include "main.h"

/**
 * _puts_recursion - prints a string of character
 * @s: string to be printed
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
