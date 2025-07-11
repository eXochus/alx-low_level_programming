#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings given
 * @separator: the string to be printed between numbers
 * @n: number of times
 * @...: variadic variable
 *
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list the_string;
	unsigned int count;

	count = 0;
	if (n == 0)
	{
		;
	}
	va_start(the_string, n);
	while (count < n)
	{
		printf("%s", va_arg(the_string, char *));
		if (separator != NULL)
		{
			if (count < (n - 1))
				printf("%s", separator);
		}
		count++;
	}
	printf("\n");
	va_end(the_string);
}
