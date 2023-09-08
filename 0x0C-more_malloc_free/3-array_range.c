#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of int
 * @min: first elem of array
 * @max: last elem of array
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	j = 0;
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}


	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
