#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Void.
 */


void main(void)
{
int i, sum;
for (i = 1023; i > 0; i--)
{
if(i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
else
{
sum;
}
}
printf("%d\n", sum);
}
