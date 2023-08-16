#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from pararm to 98 in order.
 * @n: the number to start count from.
 * Return: void.
 */

void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
                {
                        printf("%d, ", i);
                }
	}
	_putchar('\n');
}
