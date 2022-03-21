#include <stdio.h>

/**
 * print_array - print n of int array
 * @a: pointer
 * @n: the number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

		printf("\n");
}
