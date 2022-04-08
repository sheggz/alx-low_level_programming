#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is n +ve, -ve or 0?
 * Return: 0 if code runs successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
