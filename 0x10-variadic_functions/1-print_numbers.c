#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *		   if separator is NULL, don’t print it
 *		   Print a new line at the end of your function
 * @separator:  the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: varying number of arguments and types
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d\n", va_arg(ap, int));

	va_end(ap);

}

