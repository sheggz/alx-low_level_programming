#include <stdio.h>

/**
 * main - print first 50 numbers of fibonacci sequence
 * Return: 0 if successful
 */

int main(void)
{
	int i = 0, sum = 0, n1 = 1, n2 = 2;

	printf("%d,%d", n1, n2);
	while (i <= 48)
	{
		sum = n1 + n2;
		printf(",%d", sum);
		n1 = n2;
		n2 = sum;
	}
	printf("\n");

	return (0);
}
