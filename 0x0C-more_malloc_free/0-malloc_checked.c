#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory
 * Return: 0 for success
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
