#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */

void print_alphabet(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}

	_putchar('\n');
}
