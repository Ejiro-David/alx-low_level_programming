#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memeory using malloc and an unsigned int
 * @b: determines size to be created
 * Return: a pointer to the address of the allocated space
 */

void *malloc_checked(unsigned int b)
{
	int *tab;

	tab = malloc(b);

	if (tab == NULL)
	{
		exit(98);
	}

	return (tab);
}

