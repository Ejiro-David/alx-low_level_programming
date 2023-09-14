#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: character to be placed between each number
 * @n: number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
		exit(0);

	for (i = 0; i < n; i++)
	{
		int current_arg = va_arg(args, int);

		printf("%d%s", current_arg, separator);
	}
	printf("\n");
}
