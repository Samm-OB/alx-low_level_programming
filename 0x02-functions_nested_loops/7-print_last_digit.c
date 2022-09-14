#include "main.h"

/**
 * print_last_digit - prints lastt digit of a number
 * @m: int used for arguement of the function
 * Return: last digit of every number
 */

int print_last_digit(int m)
{
	int last_digit = m % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
