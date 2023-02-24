#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int outer, inner;

		for (outer = 0; outer < size; outer++)
		{
			for (inner = 0; inner < size; inner++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

