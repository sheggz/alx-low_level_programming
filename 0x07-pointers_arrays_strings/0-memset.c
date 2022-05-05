#include "main.h"

/**
 * _memset - a function that fills a memory  block with a constant byte.
 * @s: pointer to the memory area to kick off
 * @b: a variable to hold the const byte to be filled in
 * @n: memory bytes to be filled starting from address at s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (n == 0)
		return (s);
	*s = b;
	return (_memset((s + 1), b, n - 1));
}



