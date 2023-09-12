#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog with stored copies of name and owener
 * @name: name of dog
 * @age: number age
 * owner: name of owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	char *namestr, *ownerstr;
	struct dog_t *dog_ptr;

if (name == NULL || owner == NULL)
	return (NULL);

name_len = strlen(name);
owner_len = strlen(name);

dog_ptr = malloc(sizeof(dog_t));

if (dog_ptr == NULL)
	return (NULL);

namestr = malloc(name_len + 1);
ownerstr = malloc(owner_len + 1);

if (namestr == NULL || ownerstr == NULL)
{
	return (NULL);
}

strcpy(dog_ptr->name, name);
strcpy(dog_ptr->owner, owner);
dog_ptr->age = age;

return (*dog_ptr);
}

