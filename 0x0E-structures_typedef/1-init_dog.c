#include "dog.h"
#include "main.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the new struct dog
 * @name: Pointer to name of dog
 * @age: Age of dog parameter
 * @owner: pointer to owner of dog parameter
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
