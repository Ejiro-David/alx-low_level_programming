#include "main.h"

/**
 * _isalpha - function checks if c is alpha
 * @c: character to be checked
 * Return: will return 1 if c is alphabetic otherwise will return 0
 */

int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
