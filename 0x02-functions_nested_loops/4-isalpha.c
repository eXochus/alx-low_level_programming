#include "main.h"

/**
 * _isalpha - checks for lowercase alphabet
 * @c: letter to be checked
 *
 * Return: 1 if true, 0 if else
 */

int _isalpha(int c)
{
	char i;
	int result;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}
	if (result == 1)
	{
		result = 1;
	}
	else
	{
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
	}
	return (result);
}
