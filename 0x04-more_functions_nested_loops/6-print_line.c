#include "main.h"

/**
 * print_line - print dashes nx
 * @n: the number of dashes to be printe
 *
 * Return: returns nothing
 */

void print_line(int n)
{
	int i;
	
	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
