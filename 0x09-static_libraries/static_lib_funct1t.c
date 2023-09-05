#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - finds the lenght of any string argument.
 * @s: string whose lenght shall be counted.
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
	i;
}

return (i);
}





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

