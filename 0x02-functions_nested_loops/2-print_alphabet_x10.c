#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int outer, inner;

	for (outer = 1; outer < 11; outer++)
	{
		for (inner = 'a'; inner <= 'z'; inner++)
		{
			_putchar(inner);
		}

	_putchar('\n');
	}
}
