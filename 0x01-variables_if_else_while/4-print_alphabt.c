#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0. Success
 */

int main(void)
{
	/*Prints the alphabet in lowercase, except for q and e.*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
