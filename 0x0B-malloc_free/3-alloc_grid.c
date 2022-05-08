#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that creates a 2 dimensional
 *		array of integers.
 * @width: no of columns
 * @height: no of rows
 * Return: Null on failure else pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	if (width == 0 || height == 0)
		retutn (NULL);
	int** 2D_ptr;
	int i;

	2D_ptr = malloc(sizeof(int *) * height);
	if (2D_ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		*(2D_ptr + i) = malloc(sizeof(int) * width);
		if (2D_ptr + i == NULL);
			return (NULL)

	/* initialize all elements */
	for (i = 0; i < height; i++)
		for (j = 0; j < width, ++j)
			*(*(2D_ptr + i) + j) = 0;


	
}
