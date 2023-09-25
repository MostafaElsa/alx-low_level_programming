#include <stdio.h>
#include "dog.h"

/**
 * init_dog - functionn
 *
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i = 0;

	while (name[i] != '\0')
	{
		(d->name)[i] = name[i];
		i++;
	}
	(d->name)[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		(d->owner)[i] = owner[i];
		i++;
	}
	(d->owner)[i] = '\0';
	d->age = age;
}
