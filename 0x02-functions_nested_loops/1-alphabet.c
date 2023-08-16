#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: ALways
 *
 * print_alphabet - prints A to Z.
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
