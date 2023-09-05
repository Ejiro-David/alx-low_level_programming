#include "main.h"
#include <stdio.h>
#include <unistd.h>


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



/**
 * print_alphabet - check the code
 *
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



/**
 * _islower - checks code
 *
 * Return: zero when successful
 *
 * @c: param to check
 */

int _islower(int c)
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
