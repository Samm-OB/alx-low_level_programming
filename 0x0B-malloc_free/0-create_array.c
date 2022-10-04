#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array and initializes with specific char
 * @size: size of array
 * @c: char to initialize array
 * Return: null if fails or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size i++)
	{
		arr[i] = c;
	}
	return (arr);
}
