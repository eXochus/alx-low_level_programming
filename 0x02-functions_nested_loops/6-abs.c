#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @n: number whose sign is to be printed
 *
 * Return: 1 if true, 0 if else
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
