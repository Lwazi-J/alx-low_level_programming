#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0. Success
 */

int main(void)
{
	/*Prints the alphabet in lowercase, and then in uppercase.*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
