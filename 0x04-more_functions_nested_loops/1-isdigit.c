#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character input
 * Return: 1 if c is a digit 1 if c is a digit
 */

int _isdigit(int c)
{
	char isdigit = '0';
	int isnot = 0;

	for (; isdigit <= '9'; isdigit++)
	{
		if (c == isdigit)
		{
			return (1);
		}
	}
	return (isnot);
}
