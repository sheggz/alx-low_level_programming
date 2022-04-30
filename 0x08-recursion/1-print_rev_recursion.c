#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: pointer that holds the address of the first element of char array
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* can be written as if (!*s)*/
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s); /*
		       * this means that it will only start printing when
		       * it has gotten to the end of the string, i.e while
		       * descending the stack.
		       */
}
