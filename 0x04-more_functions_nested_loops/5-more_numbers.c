#include "main.h"

/**
 * more_numbers - write numbers from 0 to 14 10x
 *
 * Return: returns nothing
 */

void more_numbers(void)
{
	int number;
	int times;

	for (times = 0; times < 10 ; times++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
				_putchar('0' + (number / 10));
			_putchar('0' + (number % 10));
		}
		_putchar('\n');
	}
}
