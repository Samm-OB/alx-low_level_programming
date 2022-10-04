#include "main.h"
#include <stdlib.h>

/**
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
	for (i = 0; i < arr; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
