#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the integer to be modified
 * @index: the bit position to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    *n = *n & (0UL << index);
    return 1;
}
