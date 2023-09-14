#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings with separator.
 * @separator: character betwween strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}