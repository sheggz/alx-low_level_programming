#include "main.h"
/**
 * _abs - print the absolute value of n
 * @n: number to be investigated
 * Return: n if positive
 *	   0 if n is zero
 *	   -n if n is negative
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}
