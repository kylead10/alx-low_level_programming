#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states its condition.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("%d is positive\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("%d is negative\n", n, lastd);
	}
	else if lastd < 6 && lastd != 0)
	{
		printf("%d is zero\n", n, lastd);
	}
	return (0);
}



