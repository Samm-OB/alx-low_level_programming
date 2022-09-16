#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c - used to for the arguement of the function
 * Return: 1(success)
 * Return: 0(fail)
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		_putchar(c);
		return (1);
	}
	else
	{
		_putchar(c);
		return (0);
	}
}
