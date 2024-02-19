#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - converts decimal to binary
 * @n: decimal to be conv
 */

void print_binary(unsigned long int n)
{
unsigned int bitmask = 1 << 31;
int i = 0;
int leadingZeros = 1;

if (n == 0)
{
_putchar('0');
return;
}
for (i = 0; i < 32; i++)
{
int bit = (n & bitmask) != 0;
if (bit || !leadingZeros)
{
_putchar(bit ? '1' : '0');
leadingZeros = 0;
}
bitmask >>= 1;
}
}
