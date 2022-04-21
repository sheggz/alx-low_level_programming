#include "main.h"

/**
 * swap_int - a function that swaps the values of two integer
 * @a: number one
 * @b: number two
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
