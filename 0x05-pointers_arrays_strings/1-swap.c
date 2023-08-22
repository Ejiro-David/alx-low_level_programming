#include "main.h"

/**
 * swap_int - switches one integer for another
 * @a: one of the int to be swapped.
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp1, temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
