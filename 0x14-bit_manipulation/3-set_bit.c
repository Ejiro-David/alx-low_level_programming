#include "main.h"

/**
 * set_bit - sets bit value to one at index
 * @n: number
 * @index: given index
 * Return 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
