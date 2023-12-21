#include "main.h"

/**
 * _isdigit - checks for digit number
 * @c: the case to be checked
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isdigit(int c)
{
	int i;
	int result;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}
	return (result);
}
