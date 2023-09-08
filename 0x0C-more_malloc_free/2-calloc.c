#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of each array elem
 * Return: pointer to memory address for array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *tab;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	return (tab);
}
