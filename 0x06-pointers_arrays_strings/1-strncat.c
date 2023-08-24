#include "main.h"

/**
 * _strncat - add two strings with a byte limit
 * @dest: one string to be added to
 * @src: string to be added
 * @n: byte limit
 * Return: Pointer faceing dest; sum string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *ptr;

	j = 0;

	for (i = 0; src[j] != '\0'  && n > 0; i++)
	{
		while (dest[i] == '\0')
		{
			dest[i] = src[j];
			j++;
			n--;
		}
	}
	ptr = &dest[0];

	return (ptr);
}
