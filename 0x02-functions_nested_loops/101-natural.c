#include "main.h"

/**
 * _natural - prints sum of multiples of 3 and 5 below 1024
 * @n: int used as arguement for the function
 * Return: 0(success)
 */

int _natural(int n)
{
	int m = 0;

	for (n = 0; n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m += n;
		}
		_putchar(m);
		_putchar('\n');
	}
}
