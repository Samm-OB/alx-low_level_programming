#include "main.h"

/**
 * preFunction - checks if integer sqrt exists
 * @num: integer
 * @b: sqrt of integer
 * Return: sqrt of integer
 */

int preFunction(int num , int b)
{
	if ((b * b) == num)
	{
		return (b);
	}
	else
	{
		if ((b * b) > num)
		{
			return (-1);
		}
		else
		{
			return (preFunction(num, b + 1));
		}
	}
}

/**
 * _sqrt_recursion - natural sqrt of integer
 * @n: integer
 * Return: sqrt of integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0);
	{
		return (-1);
	}
	else
	{
		return (preFunction(n, 0));
	}
}
