#include "main.h"
#include <stdio.h>

/**
 * print_line_helper - prints a s bytes of a buffer
 * @l: argument 1
 * @c: argument 2
 * @s: argument 3
 * Return: void
 */

void print_line_helper(char *c, int s, int l)
{
	int x, k;

	for (x = 0; x <= 9; x++)

	{
		if (x <= s)
			printf("%02x", c[l * 10 + x]);
		else
			printf("  ");
		if (x % 2)

			putchar(' ');
	}

	for (k = 0; k <= s; k++)

	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: argument 1
 * @size: argument 2
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x;

	for (x = 0; x <= (size - 1) / 10 && size; x++)
	{
		printf("%08x: ", x * 10);
		if (x < size / 10)
		{
			print_line_helper(b, 9, x);
		}
		else
		{
			print_line_helper(b, size % 10 - 1, x);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
