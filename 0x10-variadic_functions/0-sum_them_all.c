#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all the passed parameters
 * @n: number of numbers to add
 * @...: variadic variable
 *
 * Return: returns the sum of everything
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list the_num;
	unsigned int count;
	int result;

	result = 0;
	count = 0;
	if (n == 0)
		return (0);
	va_start(the_num, n);
	while (count < n)
	{
		result += va_arg(the_num, int);
		count++;
	}
	va_end(the_num);
	return (result);
}
