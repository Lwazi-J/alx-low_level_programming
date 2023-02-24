#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int number;

	number = 1;
	printf("%d", number);
	for (number = 2; number < 101; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (number % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", number);
		}
	}
	printf("\n");
	return (0);
}
