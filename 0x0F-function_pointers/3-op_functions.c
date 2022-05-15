#include "3-calc.h"

/**
 * op_add - a function that adds 2 integers
 * a: first number to be added
 * b: second number to be added.
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_add - a function that subtracts 2 integers
 * a: first number to be subtracted
 * b: second number to be subtracted.
 * Return: the difference
 */

int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	return (b - a);
}

/**
 * op_mul - a function that multiplies 2 integers
 * a: first number to be multiplied
 * b: second number to be multiplied
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides 2 integers
 * a: numerator
 * b: denominator
 * Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that calculates the modulo of 2 integers
 * a: dividend
 * b: divisor
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
