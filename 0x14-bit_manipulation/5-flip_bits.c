#include "main.h"
#include <stdio.h>

/**
 * flip_bits - finds the number of different bits btwn 2 numbers
 * @n: one number to be compared to
 * @m: another number
 * Return: Number of bits you'd need to flip to change n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = n ^ m;
	int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}

