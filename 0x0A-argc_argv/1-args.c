#include "main.h"
#include <stdio.h>

/**
 * main - print the  number of the argument
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char **c;

	printf("%d\n", argc - 1);
	c = argv;
	argv = c;
	return (0);
}
