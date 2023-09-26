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
	char *n, *o;

	d = malloc(sizeof(dog_t));
	n = malloc(sizeof(name));
	d->name = malloc(sizeof(name));
	o = malloc(sizeof(owner));
	d->owner = malloc(sizeof(owner));
	if (d->name == NULL || d->owner == NULL)
	{
		free(o);
		free(n);
		free(d);
		return (NULL);
	}
	n = name;
	o = owner;
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
