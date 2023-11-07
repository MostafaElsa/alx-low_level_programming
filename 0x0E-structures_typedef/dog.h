#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Description: name and age and owner of dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
