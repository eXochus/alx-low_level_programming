#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed alternatively
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
