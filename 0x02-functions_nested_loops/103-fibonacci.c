#include <stdio.h>

/**
 * main - print sum of all even numbers in fib sequence
 *	  from 0 - 4000000
 * Return: 0 if successful
 */

int main(void)
{
	long int i = 1, sum = 0, n1 = 1, n2 = 2, even_sum = 2;

	while (True)
	{
		sum = n1 + n2;
		if (sum >= 4000000)
			break;
		if (sum % 2 == 0)
			even_sum = even_sum + sum;
		n1 = n2;
		n2 = sum;
		i++;
	}
	printf(", %lu", even_sum);
	printf("\n");

	return (0);
}
