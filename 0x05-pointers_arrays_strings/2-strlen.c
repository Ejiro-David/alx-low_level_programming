#include "main.h"
/**
 * _strlen - finds the lenght of any string argument.
 * @s: string whose lenght shall be counted.
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++);

return (i);
}
