#include "main.h"
/**
 * rev_string - a fn that prints a string in reverse
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
