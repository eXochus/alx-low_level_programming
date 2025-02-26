#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers to 98
 * @n: number of the starting point
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}

	printf("\n");
}
