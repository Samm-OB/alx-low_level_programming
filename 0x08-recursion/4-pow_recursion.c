#include "main.h"

/**
 * _pow_recursion - raises value x to power of y
 * @x: value to be raised
 * @y: raised value
 * Return: raised value(y)
 */

int _pow_recursion(int x, int y)
{
	if (x < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (1);
	}
	if (x == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
