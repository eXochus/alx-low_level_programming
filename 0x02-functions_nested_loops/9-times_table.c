#include "main.h"

/**
 * times_table - prints multiplication from o to 9
 *
 * Return: nothing
 */

void times_table(void)
{
	int row;
	int column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			_putchar('0' + column);
			_putchar(',');
		}
			_putchar('0' + row);
			_putchar('\n');
	}
}
