#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int result;

	count = 1;
	result = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
		for (; count < argc; count++)
			result += atoi(argv[count]);
		printf("%d\n", result);
	}

	return (0);
}
