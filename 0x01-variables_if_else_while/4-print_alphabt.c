#include <stdio.h>

/**
 * main - defines the entry point of the code
 *
 * Return: nothing except 0
 */

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		if (c == 101)
			;
		else if (c == 113)
			;
		else
			putchar(c);
	putchar('\n');

	return (0);
}
