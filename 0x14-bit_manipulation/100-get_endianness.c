#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check your hardware's Endianess
 * Return: 0 if big endian or 1 if little Endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *bytePointer = (char *)&i;

	if (*bytePointer == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
