#include "main.h"

/**
 * print_diagonal - print diagonal nx
 * @n: the number of diagonal to be printed
 *
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
		{
				_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
