#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array given the number
 *	     of elelments and size of each byte
 *
 * @nmemb: number of elements to be in the array
 * @size: size of each byte of data to be stored (instead of using sizeof())
 * Return: NULL if size = 0 or nmemb = 0 or malloc fails else ptr to allocated
 *			  memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr; /* void ptr to be returned */

	if (size != 0 && nmemb != 0)
	{
		ptr = malloc(nmemb * size);
		if (ptr != NULL)
		{
			for (i = 0; i < nmemb * size; i++)
				*(ptr + i) = 0;
			return (ptr);
		}
	}
	return (NULL);
}
