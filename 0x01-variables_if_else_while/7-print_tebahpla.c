#include <stdio.h>

/**
 * main - defines the entry point of the code
 *
 * Return: nothing except 0
 */

int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
