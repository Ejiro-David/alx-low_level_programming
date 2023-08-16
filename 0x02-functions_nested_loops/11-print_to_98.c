#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from pararm to 98 in order.
 * @n: the number to start count from.
 * Return: void.
 */

void print_to_98(int n)
{
	

	if (n <= 98)
	{
		int i;
		for (i = n; n <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		int j;
		for (j = n; n > 98; j--)
                {
                        printf("%d, ", j);
                }
	}
	_putchar('\n');
}
