#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character input
 * Return: (1) if c is uppercase (0) otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			return (1);
		}
	}
	return (0);
}
