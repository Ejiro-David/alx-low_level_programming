#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _isupper - checks if param is large cased letter
 * @c: param to be checked
 * Return: 1 for uppercase(true), 2 for false.
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}

#include "main.h"

/**
 * _isdigit - checks if int is digit
 * @c: figure to be checked
 * Return: 1 for digit, 0 for not digit
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: ALways
 *
 * print_alphabet - prints A to Z.
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}


#include "main.h"

/**
 * main - checks code
 *
 * Returns zero when successful
 *
 * _islower checks if param is small case
 */

int _islower (int c)
{
if (c <= 'a' && c >= 'z')
{
return (1);
}
else
{
return (0);
}
}


#include "main.h"

/**
 * _abs - checks for the absolute value of
 * @n: the integer.
 * Return: Absolute value of the int.
 */

int _abs(int n)
{
if (n >= 0)
{
	return (n);
}
else
{
	return (-n);
}
}



#include "main.h"
/**
 * _strlen - finds the lenght of any string argument.
 * @s: string whose lenght shall be counted.
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++);

return (i);
}



#include "main.h"

/**
 * _strcpy - a function that copies
 * @dest: a parameter in the function
 * @src: another function parameter
 *
 * Return: dest successfully
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}



#include "main.h"

/**
  * _puts - Prints a string followed by a new line
  * @str: The string to be printed
  *
  * Return: zero for success
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}


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



#include "main.h"

/**
 *_memset - fills n bytes with b
 * @s: pointer facing memory address to be filled
 * @b: used to fill memory
 * @n: num of int to be filled
 * Return: A pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i, j;

j = 0;
for (i = n; i > 0; i--)
{
s[j] = b;
j++;
}
return (s);
}


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


#include "main.h"

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

#include "main.h"

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


#include "main.h"
#include <stdio.h>
#include <string.h>

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

#include "main.h"
#include <stdio.h>
#include <string.h>

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
