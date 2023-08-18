#include "main.h"

/**
 * print_line - prints a straight line with _ chars
 * @n: _ n num of times
 */

void print_line(int n)
{
	int i = n;

	while (i > 0)
	{
		_putchar(95);
		i--;
	}
	_putchar('\n');
}
