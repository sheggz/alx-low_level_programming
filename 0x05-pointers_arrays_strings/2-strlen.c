#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to a string
 * Return: the number of chars in - i
 */

int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == '\0')
		{
			return (i);
		}
		i++;
	}
}
