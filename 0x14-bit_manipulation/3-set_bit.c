#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * set_bit - fetches the value of a bit at a given integer and sets to 1
 * @n: the integer to be checked
 * @index: the bit at the position
 * Return: bit value(1) or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1UL << index);
	return 1;
}
