#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: memory address of the dog struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)
	return;
else if (d->name == NULL)
	d->name = "nill";
else if (d->owner == NULL)
	d->owner = "nill";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}

