#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number to begin from
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98 && n < 10000)
	{
		for (i = n; i >= 98; i--)
		{
			if ((i / 1000) != 0)
			{
				_putchar((i / 1000) + '0');
				_putchar(((i % 1000) / 100) + '0');
				_putchar((((i % 1000) % 100) / 10) + '0');
				_putchar((((i % 1000) % 100) % 10) + '0');
			}
			else if ((i / 100) != 0)
			{
				_putchar((i / 100) + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
			}
			else if ((i / 10) != 0)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n >= -1000 && n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= 0)
			{
				if ((-i / 1000) != 0)
				{	_putchar('-');
					_putchar((-i / 1000) + '0');
					_putchar(((-i % 1000) / 100) + '0');
					_putchar((((i % 1000) % 100) / 10) + '0');
					_putchar((((i % 1000) % 100) % 10) + '0');
				}
				else if ((-i / 100) != 0)
				{
					_putchar('-');
					_putchar((-i / 100) + '0');
					_putchar(((-i % 100) / 10) + '0');
					_putchar(((-i % 100) % 10) + '0');
				}
				else if ((-i / 10) != 0)
				{
					_putchar('-');
					_putchar((-i / 10) + '0');
					_putchar((-i % 10) + '0');
				}
				else if (i == 0)
				{
					_putchar('0');
				}
				else if (-i < 10)
				{
					_putchar('-');
					_putchar(-i + 48);
				}
			}
			else
			{
				if ((i / 10) != 0)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{
					_putchar(i + 48);
				}
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');

	}
}
