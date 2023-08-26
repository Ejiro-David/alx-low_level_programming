#include "main.h"

/**
 * _strncpy - adds 2 str with n limit
 * @dest: one string to be added
 * @src: second string to be added
 * @n: limit num of str to be added
 * Return: pointer to sum str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
