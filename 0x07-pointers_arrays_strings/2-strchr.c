#include "main.h"

/**
 * _strchr - locates the first occurence of a char within s
 * @s: string to search.
 * @c: letter to find
 * Return: pointer to c or NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &(s[i]);
			return (ptr);
		}
	}
	return (0);
}
