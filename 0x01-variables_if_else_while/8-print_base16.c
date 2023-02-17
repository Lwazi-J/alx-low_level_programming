#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0. Success
 */

int main(void)
{
	/*Prints all the numbers of base 16 in lowercase.*/

	int val;
	char letter;

	for (val = '0'; val <= '9'; val++)
	{
		putchar(val);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
