#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to first element of the character array
 * Return: the length of the string being investigated
 */

int _strlen_recursion(char *s)
{
/*
 * THE EXPLANATION - case study "CARS"; a string with 4 letters
 * 4 = 1 + 3; 4 = 1 + (1 + 2); 4 = 1 + (1 + (1 + 1)); 4 = 1 + (1 + (1 + (1+0)))
 * we have successfuly been able to express a complex count as a repition of a
 * pattern i.e 1 + (number of letters remaining) and this is what each
 * function call should return. hence; in code we have:
*/
	
	if(s* == '\0')
		return (0);
	return (1 + _strlen_recursion(&(*(s + 1))));
}
