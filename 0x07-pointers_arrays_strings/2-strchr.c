#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: pointer to string to be searched
 * @c: character to be searched for
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	if (*s == '\0')
		return ("\0");
	return (_strchr(s + 1, c));
}
