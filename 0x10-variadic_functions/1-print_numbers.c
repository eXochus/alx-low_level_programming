#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers given
 * @separator: the string to be printed between numbers
 * @n: number of times
 * @...: variadic variable
 *
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list the_num;
	unsigned int count;

	count = 0;
	if (n == 0)
	{
		;
	}
	va_start(the_num, n);
	while (count < n)
	{
		printf("%d", va_arg(the_num, int));
		if (separator != NULL)
		{
			if (count < (n - 1))
				printf("%s", separator);
		}
		count++;
	}
	printf("\n");
	va_end(the_num);
}
