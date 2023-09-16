#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: format
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *fmt;
char *separator;
va_start(args, format);
fmt = format;
separator = "";
while (*fmt)
{
if (*fmt == 'c')
{
printf("%s%c", separator, va_arg(args, int));
}
if (*fmt == 'i')
{
printf("%s%d", separator, va_arg(args, int));
}
if (*fmt == 'f')
{
printf("%s%f", separator, (float)va_arg(args, double));
}
if (*fmt == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("%s(nil)", separator);
}
else
{
printf("%s%s", separator, str);
}
}
separator = ", ";
fmt++;
}
printf("\n");
va_end(args);
}
