#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: a pointer to string
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	while (str[len] != '\0')
		++len;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i <= len - 1; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
