#include "main.h"

/**
 * _strcat - adds 2 str
 * @dest: one string to be added
 * @src: second string to be added
 * Return: pointer to sum str
 */

char *_strcat(char *dest, char *src)
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
