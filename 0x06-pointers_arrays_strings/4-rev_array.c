#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints out the reverse of an array
 * @a: array to be reversed
 * @n: lenght of array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		printf("%d, ", a[i]);
	}
}
