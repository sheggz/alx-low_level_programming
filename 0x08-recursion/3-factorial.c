#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *		using recursion.
 * @n: positive integer who's factorial is to be calculated
 * Return: the factotial of n.
*/

int factorial(int n)
{
	/* n! = n * (n - 1)! */

	/* BASE CASE */
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
