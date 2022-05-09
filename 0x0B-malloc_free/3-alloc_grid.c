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
	int **twoD_ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	/*
	 * let's create a pointer that is initialized to a the address of the
	 * begining of a memory block that will house addressess to other
	 * memory blocks that will each house intgers
	 * i.e int** twoD_ptr = &twoD_ptr[0]
	 *     twoD_ptr[0] will be of type int*
	 *     twoD_ptr[0] = &twoD_ptr[0][0]
	 */


	twoD_ptr = malloc(sizeof(int *) * height); /* twoD_ptr == &twoD_ptr[0] */
	if (twoD_ptr == NULL)
	{
		free(twoD_ptr);
		return (NULL);
	}

	/*
	 * each position in the first block should be initialized to the
	 * begining of other unique memory blocks that will stoe intgers
	 */

	for (i = 0; i < height; i++)
	{
		*(twoD_ptr + i) = malloc(sizeof(int) * width);
		if (*(twoD_ptr + i) == NULL)
		{
			for (j = i; j >= 0; --j)
				free(*(twoD_ptr + j)); /*
							 * free everything
							 * backwards
							 */
			free(twoD_ptr); /* free the general space */
			return (NULL);
		}
	}
	/* initialize all positions in each unique memory block to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; ++j)
			*(*(twoD_ptr + i) + j) = 0; /* same as twoD_ptr[i][j] */
	}
	return (twoD_ptr);
}
