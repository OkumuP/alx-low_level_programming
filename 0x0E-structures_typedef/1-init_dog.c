#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable
 * @name: the name to initialize
 * @d: pointer to variable to be intialized
 * @age: the age to initialize
 * @owner: owner of the dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
