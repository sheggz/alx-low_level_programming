#include <stdio.h>

/**
 * main - print first 50 numbers of fibonacci sequence
 * Return: 0 if successful
 */

int main(void)
{
	long int i = 1, sum = 0, n1 = 1, n2 = 2;

	printf("%lu, %lu", n1, n2);
	while (i <= 48)
	{
		sum = n1 + n2;
		printf(", %lu", sum);
		n1 = n2;
		n2 = sum;
		i++;
	}
	printf("\n");

	return (0);
}
