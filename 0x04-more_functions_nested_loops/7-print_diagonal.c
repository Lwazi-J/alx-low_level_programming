#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int outer, inner;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (outer = 1; outer <= n; outer++)
		{
			for (inner = 1; inner < outer; inner++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
