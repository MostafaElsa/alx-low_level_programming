#include <stdio.h>
#include "dog.h"

/**
 * new_dog - functionn
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	n = malloc(sizeof(n));
	o = malloc(sizeof(o));
	if (n == NULL || o == NULL)
		return (NULL);
	n = name;
	o = owner;
	d->name = n;
	d->owner = o;
	d->age = age;
	return (d);
}
