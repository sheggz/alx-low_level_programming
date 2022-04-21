#include "main.h"
/**
 * puts2 - a function that prints every 2 characters of
	  a string starting from the first.
 * @str: a pointer to string
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		++len;
	for (i = 0; i <= len - 1; ++i)
	{
		if ((i) % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
