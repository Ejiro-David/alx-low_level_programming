#include "main.h"

/**
 * _isdigit - checks if int is digit
 * @c: figure to be checked
 * Return: 1 for digit, 0 for not digit
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
