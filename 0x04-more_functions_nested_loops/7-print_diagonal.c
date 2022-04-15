#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i,j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 1)
			{
				for (j = 0; j < i - 1; j++)
				{
					_putchar(' ');
				}
			}
		}
		_putchar ('\\');
	}
	_putchar ('\n');

}
