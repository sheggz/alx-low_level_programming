#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *		     function should cause normal process termination with a
 *		      status value of 98
 * @b: size needed memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98); /* terminate program with a code 98 */
	return (p);
}
