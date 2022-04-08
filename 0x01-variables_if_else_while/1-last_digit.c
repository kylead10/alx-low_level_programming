#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

<<<<<<< HEAD
if (n % 10 > 5)
{	
	printf("Last digit of %i is %i and is greater thaun 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
	printf("Last digit of %i is %i and is 0\n", n, n % 10);
}
else
{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
}

return (0);
}
=======
	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
		


>>>>>>> 9ed85c919900d974e4c3a7e1a2c3f1a9568616aa
