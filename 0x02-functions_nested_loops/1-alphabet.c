#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: ALways 0
 *
 * print_alphabet prints alpha
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
