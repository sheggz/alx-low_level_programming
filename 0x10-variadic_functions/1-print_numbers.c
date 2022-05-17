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
	va_list v_argptr;

	/* 
	 * if (separator == NULL)
	 *	return;
	 *
	 * WRONG INTERPRETATION OF THAT CLAUSE ABOUT THE SEPARATOR
	 */

	va_start(v_argptr, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(v_argptr, int));
		if (separator != NULL)
			printf("%s",separator);
	}
	printf("%d\n", va_arg(v_argptr, int));

	va_end(ap);

}

