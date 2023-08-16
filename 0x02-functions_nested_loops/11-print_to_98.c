#include "main.h"

/**
 * print_to_98 - Prints from pararm to 98 in order.
 * @n: the number to start count from.
 * Return: void.
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
