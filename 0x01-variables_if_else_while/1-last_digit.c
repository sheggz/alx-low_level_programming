#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is n >5, 0 or between 0 and 6?
 * Return: 0 if code runs successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 0 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}