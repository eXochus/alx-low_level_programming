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
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
