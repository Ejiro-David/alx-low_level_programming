#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all passed-in args
 */

void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
const char *fmt = format;

va_start(args, format);

while (fmt && *fmt)
{
int is_valid_format = 1;

switch (*fmt)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float)va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("%s(nil)", separator);
else
printf("%s%s", separator, str);
break;
}
default:
is_valid_format = 0;
break;
}
if (is_valid_format)
{
separator = ", ";
}
fmt++;
}
printf("\n");
va_end(args);
}

