#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: number of items to be in array
 * @c: initialed into ar
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
char *ar;

if (size != 0)
{
	ar = malloc(size * sizeof(char));
        ar[0] = c;	
}
else
{
	return (NULL);
}
return (ar);
}
