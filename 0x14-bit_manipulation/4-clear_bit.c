#include "main.h"
#include <limits.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: a pointer to the number to modify.
 * @index: the index of the bit to clear, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= CHAR_BIT * sizeof(unsigned long int))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
