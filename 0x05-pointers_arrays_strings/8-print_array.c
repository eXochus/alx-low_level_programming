#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of numbers
 * @a: array to be printed
 * @n: the number of element of the array
 *
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		printf("%d, ", a[i]);
		i++;
	}
}
