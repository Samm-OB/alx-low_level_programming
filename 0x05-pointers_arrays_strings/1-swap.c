#include "main.h"

/**
 * 1-swap - swaps 2 integers
 * @a: integer a
 * @b: integer b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
