#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Return: Struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(i * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	dog->owner = malloc(j * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
