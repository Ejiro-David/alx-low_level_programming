#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  defines dog
 * @name: name of dog
 * @age: age
 * @owner: who get dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t -  defines dog
 * @name: name of dog
 * @age: age
 * @owner: who get dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
