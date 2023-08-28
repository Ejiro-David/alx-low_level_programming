#include "main.h"

/**
 *_memset - fills n bytes with b
 * @s: pointer facing memory address to be filled
 * @b: used to fill memory
 * @n: num of int to be filled
 * Return: A pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i, j;

j = 0;
for (i = n; i > 0; i--)
{
s[j] = b;
j++;
}
return (s);
}
