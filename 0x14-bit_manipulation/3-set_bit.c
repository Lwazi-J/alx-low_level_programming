#include "main.h"
#include <limits.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a pointer to the number to modify.
 * @index: the index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= CHAR_BIT * sizeof(unsigned long int))
		return (-1);

	*n |= (1UL << index);
	return (1);
}

