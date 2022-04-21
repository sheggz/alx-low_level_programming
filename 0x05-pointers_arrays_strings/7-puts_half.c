#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: a pointer to string
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		++len;
	for (i = len / 2; i <= len - 1; ++i)
	{
		_putchar(str[i]);
	}
}
