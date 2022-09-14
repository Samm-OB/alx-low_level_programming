#include "main.h"

/**
 * _abs - gives the absolute value of a number
 *@z: int used as the arguement for the function
 *Return: 0(success)
 */

int _abs(int z)
{
	if (z > 0 || z == 0)
	{
		return (z);
	}
	else
	{
		return (z * -1);
	}
}
