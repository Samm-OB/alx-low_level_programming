#include <stdio.h>

/**
 * array_iterator - function that executes a function given as parameter
 * @size: size of array
 * @action: pointer to function
 * @array: array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
