#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: times table to be printed (from 0 - 15)
*/

void print_times_table(int n)
{
	int i = 0, j = 0;

	if (n >= 0 && n <= 15)
	{
		for (; i <= n; i++)
		{
			for (; j <= n; j++)
			{
				if (i * j >= 100)
				{
					_putchar(((i * j) / 100) + '0');
					_putchar((((i * j) % 100) / 10) + 48);
					_putchar((((i * j) % 100) % 10) + '0');
				}
				else if (i * j >= 0 && i * j < 100)
				{
					if (i * j >= 10)
					{
						_putchar(((i * j) / 10) + '0');
					}
					_putchar(((i * j) % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					if (i * (j + 1) < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if ((i * (j + 1) >= 10) && (i * (j + 1) < 100))
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
			}
		}
	}
}
