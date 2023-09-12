#include "dog.h"
#include <string.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: address of dog struct
 * @name: name of dog, string.
 * @age: float point age of dog
 * @owner: string of owners name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}

