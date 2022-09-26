#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of square matrix
 * @a: pointer to start matrix
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, c, d, e = 0, f = 0;

	for (b = 0; b < size; b++)
	{
		d = (b * size) + b;
		e += *(a + d);
	}
	for (c = 0; c < size; c++)
	{
		d = (c * size) + (size - 1 - c);
		r += *(a + d);
	}
	printf("%i, %i", e, f);
}
