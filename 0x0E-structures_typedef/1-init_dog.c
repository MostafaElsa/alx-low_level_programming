#include <stdio.h>
#include "dog.h"

/**
 * init_dog - functionn
 *
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i = 0,len = 1;

	while (name[i] != '\0')
		len++;
	d->name = malloc(len);
	while (name[i] != '\0')
	{
		(d->name)[i] = name[i];
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
		len++;
	d->owner = malloc(len);
	while (owner[i] != '\0')
	{
		(d->owner)[i] = owner[i];
		i++;
	}
	d->age = age;
}
