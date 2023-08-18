#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints each num 0-9 multiplying each by ten.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
		printf("%d", j);
		}
		_putchar('\n');
	}
}
