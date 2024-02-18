#include "main.h"
#include <stddef.h>
#include <stdio.h>

void print_binary(unsigned long int n)
{
	unsigned int bitmask = 1 << 31;
	int i = 0;
	int leadingZeros = 1;
 
	for(i = 0; i < 32; i++)
	{
		int bit = (n & bitmask) != 0;

		if(bit || !leadingZeros){
			printf("%d", bit);
			leadingZeros = 0;
		}

		bitmask >>= 1;
		
	}

}
