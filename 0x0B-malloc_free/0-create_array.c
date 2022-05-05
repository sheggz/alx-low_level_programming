#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes
 *		  it with a specific char.
 * @size: size of array to be created
 * @c: the initialization value
 * Return: Null if size is 0 and pointer to the array if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
