#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_unit - converts binary to whole number base ten
 * @b: binary number to be conv
 * Return: Unsigned int, answer
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int ans = 0;
int i = 0;

if (b == NULL)
return 0;
while (b[i] == '0' || b[i] == '1')
{
ans <<= 1;
ans += b[i]-'0';
i++;
}	
return ans;
}
