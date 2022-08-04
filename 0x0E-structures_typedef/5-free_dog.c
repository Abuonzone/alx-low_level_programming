#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * @d: member 1
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
	if (d->name)
	{
		free(d->name);
		free(d);
	}
	if (d->owner)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
