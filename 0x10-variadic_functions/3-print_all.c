#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print any argument passed to it
 * @format: the formats of the arguments in order
 * @...: variadic variable
 *
 * Return: returns nothing
 */
void print_all(const char * const format, ...)
{
	va_list the_all;
	int count;
	char c_char;
	int c_int;
	double c_float;
	char *c_string;
	char *separator;
	char c_arg;

	count = 0;
	separator = "";
	va_start(the_all, format);
	if (format == NULL)
	{
		;
	}
	while (format[count] != '\0')
	{
		c_arg = format[count];
		printf("%s", separator);
		separator = ", ";
		switch (c_arg)
		{
			case 'c':
				c_char = va_arg(the_all, int);
				printf("%c", c_char);
				break;
			case 'i':
				c_int = va_arg(the_all, int);
				printf("%d", c_int);
				break;
			case 'f':
				c_float = va_arg(the_all, double);
				printf("%f", c_float);
				break;
			case 's':
				c_string = va_arg(the_all, char *);
				if (c_string == NULL)
				{
					printf("nil");
					break;
				}
				printf("%s", c_string);
				break;
			default:
				separator = "";
				break;
		}
		count++;
	}
	printf("\n");
	va_end(the_all);
}
