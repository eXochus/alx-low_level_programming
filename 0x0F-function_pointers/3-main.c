#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - put everything together
 * @argc: numbers of command line arguments
 * @argv: command line arguments
 *
 * Return: returns result
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *op;
	int result;
	int (*run)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (strcmp(op, "+") != 0 && strcmp(op, "-") != 0 && strcmp(op, "*") != 0 && strcmp(op, "/") != 0 && strcmp(op, "%") != 0)
	{
		printf("Error\n");
		exit (99);
	}
	if ((strcmp(op, "/") || strcmp(op, "%")) && b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	run = get_op_func(op);
	result = run(a, b);
	printf("%d\n", result);
	return (0);

}
