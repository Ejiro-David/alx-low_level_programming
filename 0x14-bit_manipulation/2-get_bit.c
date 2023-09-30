#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number
 * @index: position of bit
 * Returns: int value of bit at index or -1 for error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if ( n > 2500)
		return (-1);

	i = n >> index;

	return (i & 1);
}
