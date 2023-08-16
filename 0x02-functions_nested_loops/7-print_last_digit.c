#include "main.h"

/*
 * print_last_digit - prints the last digit of a number value.
 * @n: number value.
 * Return: 0 for success.
 *
 */

int print_last_digit(int n)
{
int a = -(n % 10);
_putchar(a + '0');
return (0);
}
