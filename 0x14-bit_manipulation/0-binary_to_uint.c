#include "main.h"

/**
 * binary_to_unit - converts binary to whole number base ten
 * @b: binary number to be conv
 * Return: Unsigned int, answer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int ans = 0;
int i = 0;

if (b = NULL)
return 0;
while (b[i] == '0' || b[i] == '1')
{
val <<= 1;
val += b[i]-'0';
i++;
}	
return val;
}
