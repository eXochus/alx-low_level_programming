#include "main.h"

/**
 * _pow_recursion - calculates the power of a given number
 * @x: the number whose power is to be calculated
 * @y: the number of times the power is to be calculated
 *
 * Return: the calculated result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
