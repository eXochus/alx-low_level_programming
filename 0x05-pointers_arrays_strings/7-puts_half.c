#include "main.h"

/**
 * puts_half - prints half of the string of a given variable
 * @str: the string to be printed in half
 *
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int i;
	int lenght_of_str;

	i = 0;
	lenght_of_str = 0;
	while (str[i] != '\0')
	{
		i++;
		lenght_of_str++;
	}
	if (lenght_of_str % 2 == 0)
	{
		for (i = lenght_of_str / 2; i != lenght_of_str; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (lenght_of_str / 2) - 1; i != (lenght_of_str + 1); i++)
			_putchar(str[i]);
	}

	_putchar('\n');

}
