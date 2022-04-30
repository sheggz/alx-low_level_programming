#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to first element of the character array
 * Return: the length of the string being investigated
 */

int _strlen_recursion(char *s)
{
	int i = 0
	
	if (*s == '\0')
		return (i);
	++i;
	_strlen_recursion(&(*(s + 1);
}
