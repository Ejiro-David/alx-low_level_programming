#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to set the bit
 * @index: index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
