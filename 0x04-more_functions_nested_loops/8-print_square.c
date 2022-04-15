#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: function variable for size of the square
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size > 0) /*
			       * this if statement isnt necessary
			       * because the for loop will only start
			       * in the first place if i < size and for
			       * 0 < size then size must be +ve
			       */
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
