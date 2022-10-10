#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the variable type of strct dog
 * @d: pointer to structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
