#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: element of an array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *e, b, c, d;

	e = a;
	for (b = 0; b < n; b++)
	{
		e++;
	}
	for (d = 0; d < n / 2; d++)
	{
		c = a[d];
		a[d] = *e;
		*e = c;
		e--;
	}
}
