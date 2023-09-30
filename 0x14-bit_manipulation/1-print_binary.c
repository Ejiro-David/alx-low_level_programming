#include "main.h"

/**
 * print_binary - converts to base 2
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	int bit_position;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (bit_position = sizeof(n) * 8 - 1; bit_position >= 0; bit_position--)
	{
		if ((n >> bit_position) & 1)
			break;
	}

	for (; bit_position >= 0; bit_position--)
	{
		putchar((n >> bit_position) & 1 ? '1' : '0');
	}
}

	
