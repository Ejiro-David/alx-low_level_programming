#include "main.h"
#include <string.h>

/**
 * print_rev - reverses string.
 * @s: string to be reveresed
 */

void print_rev(char *s)
{
	int lenght = strlen(s);

	int i;

	for (i = lenght; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
