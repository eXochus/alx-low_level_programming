#include "main.h"

/**
 * print_alphabet - print alphabets in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}
