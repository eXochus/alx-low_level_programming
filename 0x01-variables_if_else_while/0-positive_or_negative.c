#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for the code
 *
 * Return: always zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
		printf("is positive\n");
	printf("is negative\n");

	return (0);
}
