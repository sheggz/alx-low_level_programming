#include "main.h"
int divide(int num, int divisor);

/**
 * is_prime_number -  a function that returns 1 if the input integer
 *		      is a prime number, otherwise return 0
 * @n: Number to be investigated
 * Return: 1 if true, 0 if false
 */

int is_prime_number(int n)
{
	int div = 2; /* a global divisor that will be used in a recursive fn*/

	/* 1 and 0 are not prime numbers */
	if (n <= 1)
		return (0);
	return (divisor(n, 2));
}

/**
 * divide - a function the num is perfectly divisible by other numbers
 * 	    asides 1 and itself.
 * @num: number under investigation
 * @divisor: a number between 2 and num/2 
 * Return: 1 if prime, 0 if not
*/

int divide(int num, int divisor)
{
	/* num cant have a factor > num/2 */
	/* we'd test if the number is divisible by any num from 2 - num/2 */
	if (num % divisor == 0)
		return (0);
	/* if theres a remainder up till num/2 then it is only perfectly */
	/* divisible by 1 and itself */
	if (divisor >= num/2)
		return (1);
	return (divide(num, divisor + 1));

}
