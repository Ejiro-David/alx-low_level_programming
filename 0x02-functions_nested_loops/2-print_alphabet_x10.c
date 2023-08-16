#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabets in lowercase ten times.
 *
 * Return: zero for success
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
