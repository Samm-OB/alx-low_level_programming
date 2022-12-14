#include "main.h"

/**
 * times_table - printsa out thw 9 times table
 *
 * Return: 0 (success)
 */

void times_table(void)
{
	int dig, mul, prod;

	for (dig = 0; dig <= 9; dig++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mul * dig;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
