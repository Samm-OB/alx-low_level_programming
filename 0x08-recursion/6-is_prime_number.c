#include "main.h"

/**
 * prefunction - prints 0 or 1
 * @num: integer
 * @a: factor of integer
 * Return: 0 if prime or 1 if even
 */

int prefunction(int num, int a)
{
	if (a < num)
	{
		if (num % a == 0)
		{
			return (0);
		}
		else
		{
			return (prefunction(num, a + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number
 * Return: 1 if prime and 0 if even
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prefunction(n, 2));
	}
}
