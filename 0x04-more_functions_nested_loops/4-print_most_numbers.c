#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			;
		else
		_putchar(i);
	}
	_putchar('\n');
}
