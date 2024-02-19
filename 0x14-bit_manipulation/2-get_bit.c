#include <stdio.h>
#include "main.h"

/**
 * get_bit - fetches the value of a bit at a given integer
 * @n: the integer to be checked
 * @index: the bit at the position
 * Return: bit value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = sizeof(unsigned long int) * 8 - 1;
	int bitPosition = index;
	
	for (; i >= 0; i--)
	{
		if (
	}
}
