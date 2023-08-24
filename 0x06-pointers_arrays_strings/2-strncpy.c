#include "main.h"

/**
 * _strncpy - adds 2 str with n limit
 * @dest: one string to be added
 * @src: second string to be added
 * @n: limit num of str to be added
 * Return: pointer to sum str
 */

char *_strncpyat(char *dest, char *src, int n)
{
	int i, j;
	char *ptr;

	j = 0;

	for (i = 0; src[j] != '\0'; i++)
	{
		if (dest[i] == '\0')
		{
			dest[i] = src[j];
			j++;
		}
	}
	ptr = &dest[0];

	return (ptr);
}
