#include "main.h"

/**
 * _memcpy - copies from one memory area to another
 * @dest: destination of copying
 * @src: place to copy from
 * @n: num of byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	j = 0;
	for (i = n; i > 0; i--)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
