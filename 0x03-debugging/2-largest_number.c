#include "main.h"

/**
 * largest_integer - Entry point to find largest integer
 * @x: first
 * @y: second
 * @z: third
 * code to find largest integer
 *
 * Return: largest integer
 */

int largest_integer(int x, int y, int z)
{
	int largest;

	if (x > y && y > z)
	{
		largest = x;
	}
	else if (y > x && y > z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}
	return (largest);
}
