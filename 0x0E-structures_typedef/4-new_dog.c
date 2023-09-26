#include <stdio.h>
#include "dog.h"

/**
 * new_dog - functionn
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer for struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));
	if (d->name == NULL || d->owner == NULL)
		return (NULL);
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
