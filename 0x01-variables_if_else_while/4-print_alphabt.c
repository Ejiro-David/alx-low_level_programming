#include <stdio.h>

/**
 * main- Entry point into code
 * Return: Always(0) success
 */

int main(void)
{
char letter;

do {
putchar(letter);
letter++;
} while (letter != 'q' || letter != 'e');
putchar('\n');
return (0);
}
