#include "main.h"

/**
 * print_square - print pounds for squares
 * @size: the length and breath of the square to be printed
 *
 * Return: returns nothing
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
		{
				_putchar('#');
		}
			_putchar('\n');
		}
	}
}
