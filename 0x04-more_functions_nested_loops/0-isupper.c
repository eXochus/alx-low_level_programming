#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: the case to be checked
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	int i;
	int result;

	for (i = 65; i <= 90; i++)
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
