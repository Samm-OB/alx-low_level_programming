#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free dog
 * @d: pointer to struct dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
