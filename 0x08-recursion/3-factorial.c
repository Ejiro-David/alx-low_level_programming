#include "main.h"
#include <stdio.h>

/**
 * factorial - calculate the factorial if a number
 * @n: number to be calc
 * Return: -1 for error, 0 for 1 or teh factorial ofn
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
