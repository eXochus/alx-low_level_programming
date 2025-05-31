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
	int num1;
	int num2;

	if (argc == 3)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	}
	else
		printf("Error\n");
	return (0);
}
