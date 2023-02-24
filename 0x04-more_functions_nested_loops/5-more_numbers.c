#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 x10 followed by new line
 */

void more_numbers(void)
{
	int inner, outer;

	for (outer = 1; outer < 11; outer++)
	{
		for (inner = 0; inner < 15; inner++)
		{
			if (inner >= 10)
			{
				_putchar((inner / 10) + '0');
			}
			_putchar((inner % 10) + '0');
		}
		_putchar('\n');
	}
}
