#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters to sum.
 * @...: The parameters to be summed.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	if (n == 0)
		return (0);

	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int current_arg = va_arg(args, int);
		
		sum += current_arg;
	}

	va_end(args); 

	return sum;
}
