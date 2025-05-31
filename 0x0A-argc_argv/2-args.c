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
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
