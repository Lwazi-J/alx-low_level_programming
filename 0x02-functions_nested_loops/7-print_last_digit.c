#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int nld)
{
	int result;

	result = (nld % 10);

	if (result < 0)
	{
		result = (-1 * result);
	}

	_putchar(result + '0');
	return (result);
}
