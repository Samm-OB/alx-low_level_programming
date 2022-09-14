#include "main.h"

/**
 * main - prints sum of multiples of 3 and 5 below 1024
 *
 * Return: 0(success)
 */

int main(void)
{
	int n;
	int m = 0;

	for (n = 0; n < 1024;)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			m += n;
		}
	}
	_putchar(m);
	_putchar('\n');
	return (0);
}
