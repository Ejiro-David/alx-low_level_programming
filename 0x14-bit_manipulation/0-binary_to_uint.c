#include "main.h"

/**
 * binary_to_uint - converts base 2 to unsigned int
 * @b: pointer to a string of 0s and 1s
 * Return: the converted number or 0 for failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);
	
	i = 0;
	while(b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);		
		}
		else
		{
			res = res * 2 + (b[i] - '0');
			i++;
		}
	}
	return (res);
}
