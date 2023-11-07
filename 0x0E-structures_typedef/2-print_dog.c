#include <stdio.h>
#include "dog.h"

/**
 * print_dog - functionn
 *
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (!(d->age))
		d->age = 0;
	printf("Age: %6f\n", d->age);
	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
