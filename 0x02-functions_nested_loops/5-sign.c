#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a given num.
 * @n: num to be checked
 * Return: -1, 0, 1 if num is below zero, zero or above.
 **/

int print_sign(int n)
{
if (n < 0)
{
printf("-\n");
return (-1);
}
else if (n == 0)
{
printf("0\n");
return (0);
}
else
{
printf("+\n");
return (1);
}
}
