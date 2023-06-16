#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastd = n % 10;

	if (Lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, lastd);
	}
	else if (Lastd == 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, lastd);
	}
	else if (Lastd < 6 && Lastd != 0)
	{
		printf("Last digit is %d is %d and is 0\n",
			n, lastd);
	}
	return (0);
}