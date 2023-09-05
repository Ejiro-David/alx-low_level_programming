#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

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




/**
 * _atoi - a function converts a string to an integer
 * @s: string to be converted
 *
 * Return: result of the function
 */

int _atoi(char *s)
{
	unsigned int x = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			x = (x * 10) + (*s - '0');
		}
		else if (x > 0)
			break;

	} while (*s++);

	return (x * sign);


}



/**
 * *_memcpy -  copies memory area
 * @dest: pointer destination argument1
 * @src: pointer source argument2
 * @n: integer argument3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}




/**
 * *_strstr - a function that locates a substring
 * @haystack: a pointer to the input string
 * @needle: pointer to the substring
 *
 * Return: null.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;

	}
	return (NULL);

}



/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to the input string
 * @accept: pointer to the accept string
 *
 * Return: null.
 */



char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}

	return (NULL);

}







