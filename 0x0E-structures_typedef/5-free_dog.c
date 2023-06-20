#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - to free the memory allocated for the dog struct
 * @d: the dog struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
