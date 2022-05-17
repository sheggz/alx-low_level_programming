#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of any amount of inputs
 * @n: the number of items we want to add
 * @...: varying number of inputs
 * Return: 0 if n == 0 else the calculated sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* ap - variable argument pointer variable */
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ap, int);

	va_end(ap);
	return (sum);
}
