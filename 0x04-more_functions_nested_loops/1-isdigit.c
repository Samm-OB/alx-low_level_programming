#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: int used for the arguement of the function
 *
 * Return: 0 (success)
 */

int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
