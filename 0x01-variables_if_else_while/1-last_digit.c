#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ldgt;
	char sent[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldgt = n % 10;

	if (ldgt > 5)
		printf("%s %d is %d and is greater than 5\n", sent, n, ldgt);
	else if (ldgt == 0)
		printf("%s %d is %d and is 0\n", sent, n, ldgt);
	else if (ldgt < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", sent, n, ldgt);

	return (0);
}
