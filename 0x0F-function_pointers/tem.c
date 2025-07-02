:shs:wqinclude "main.h"

/**
 * print_name - prints the name passed into it
 * @name: name to be printed
 * @f: name of function to act
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
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
