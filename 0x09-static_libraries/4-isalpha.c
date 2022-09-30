#include "main.h"

/**
 * _isalpha - checks wether its an alphabet
 * @c: int used for the arguement of the function
 *
 * Return: 0(success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
