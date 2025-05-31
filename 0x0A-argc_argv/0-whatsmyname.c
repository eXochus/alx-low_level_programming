#include "main.h"
#include <stdio.h>

/**
 * main - print the  name of the argument
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
