#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *		   if separator is NULL, don’t print it
 *		   Print a new line at the end of your function
 * @separator:  the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: varying number of arguments and types
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list ap;

	if (n == 0)
		return;
	/*
	 * if (separator == NULL)
	 *	return;
	 *
	 * NB: this is the wrong interpretaion of "if separator is null
	 * dont print it"
	 */


	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		temp = va_arg(ap, char*);
		if (temp == NULL)
			temp = "(nil)";
		printf("%s", temp);
		if (separator != NULL)
			printf("%s", separator);
	}
	temp = va_arg(ap, char *);
	if (temp == NULL)
		temp = "(nil)";
	printf("%s\n", temp);

	va_end(ap);

}

