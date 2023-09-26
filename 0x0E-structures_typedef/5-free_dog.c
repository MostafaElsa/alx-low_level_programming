#include <stdio.h>
#include "dog.h"

/**
 * free_dog - functionn
 *
 * @d: pointer for struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
