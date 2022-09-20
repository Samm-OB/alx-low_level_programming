#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers with new line
 * @a: array
 * @n: no of elements
 * Return: no error
 */

void print_array(int *a, int n)
{
	int inc;

	int inc;
	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
		{
			printf("/d, ", a[inc]);
		}
		else
		{
			printf("/d", a[inc]
		}
	}
}
