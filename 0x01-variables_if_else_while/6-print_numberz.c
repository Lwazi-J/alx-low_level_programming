#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0. Success
 */

int main(void)
{
	int val;

	for (val = '0'; val < '10'; val++)
	{
		putchar(val);
	}

	putchar('\n');

	return (0);
}
