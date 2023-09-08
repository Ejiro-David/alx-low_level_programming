#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - join one string to another, limit by a given number of bytes
 * @s1: starting string
 * @s2: surfix string
 * @n: use the first n bytes of s2
 * Return: pointer to the memory address of the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int len1 = 0, len2 = 0;
	int m = n;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (m >= len2)
		m = len2;

	result = malloc(sizeof(char) * (len1 + m + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < m; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
