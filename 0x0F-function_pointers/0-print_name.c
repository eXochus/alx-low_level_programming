#include "function_pointers.h"

/**
 * print_name - prints the name passed into it
 * @name: name to be printed
 * @f: name of function to act
 *
 * Return: returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
