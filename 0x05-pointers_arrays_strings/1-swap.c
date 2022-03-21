#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer input
 * @b: integer input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
