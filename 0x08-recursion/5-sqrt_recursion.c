#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of a given number
 * @n: the number whose square root is to be calculated
 *
 * Return: the calculated result.
 */

int _sqrt_recursion(int n)
{
	return sqrt_helper(n, 1, 0);
}
