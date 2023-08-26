#include "main.h"

/**
 * _strcmp - lexically compares two strings
 * @s1: one string to be comapred
 * @s2: second string to be compared
 * Return: the difference between the ASCII of s1 and s
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
return (0);
}
