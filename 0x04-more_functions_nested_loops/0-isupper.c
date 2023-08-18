#include "main.h"

/**
 * _isupper - checks if param is large cased letter
 * @c: param to be checked
 * Return: 1 for uppercase(true), 2 for false.
 */

int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
