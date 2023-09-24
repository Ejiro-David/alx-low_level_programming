#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dog - frees up memory used by dog
 * @d: pointer locating dog struct
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
}
