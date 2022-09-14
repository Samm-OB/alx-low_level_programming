#include "main.h"

/**
 * _islower - checks if its an alphabet is lower
 * @c - argument used in function
 *
 * Return: 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
