#include "main.h"

/**
 * swap_int  - swaps 2 integers
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
