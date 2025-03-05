#include "main.h"

/**
 * reverse_array - reverse a set of integers
 * @a: array to be reversed
 * @n: the number of content to be reversed
 *
 * Return: return an integer
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
