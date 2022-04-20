#include <stdio.h>

/**
 * main - print first 98 numbers of fibonacci sequence
 * Return: 0 if successful
 */

int main(void)
{
	long int i = 1, sum = 0, n1 = 1, n2 = 2;

	printf("%ld, %ld", n1, n2);
	while (i <= 96)
	{
		sum = n1 + n2;
		printf(", %ld", sum);
		n1 = n2;
		n2 = sum;
		i++;
	}
	printf("\n");

	return (0);
}
