#include "main.h"

/**
 * sqrt_helper - does the job properly by allowing more parameters
 * @n: the number whose square root is to be calculated
 * @odd_sub: the odd numbers to subtract
 * @count: The tabs of how many subs we've made
 *
 * Return: the calculated result.
 */

int sqrt_helper(int n, int odd_sub, int count)
{
	n =+ n - odd_sub;
	if (n == 0)
		return (count + 1);
	if (n <= -1)
		return (-1);
	return sqrt_helper(n, odd_sub + 2, count + 1);
}
