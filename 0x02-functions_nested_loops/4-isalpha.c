#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * @c: letter to be checked
 *
 * Return: 1 if true, 0 if else
 */

int _islower(int c)
{
	char i;
	int result;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			result = 1;
		else
			result = 0;
	}
	return result;
}
