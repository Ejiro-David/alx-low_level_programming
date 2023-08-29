#include "main.h"

/**
 * _strspn - count the number of charx on a string prefix
 * @s: string to be searched through
 * @accept: characters of the prefix
 * Return: the bytes of s intersect accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
