#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: int used to for the arguement of the function
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
