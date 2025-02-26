#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number whose last digit is to be printed
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = (-1 * (n % 10));
	else
		last = (n % 10);

	_putchar('0' + last);
	return (last);
}
