#include <stdio.h>
/**
 * main - using for loops and conditional statements we print
 *	a combination of two numbers with no flip combination of
 *	same numbers and both numbers must be different
 * Return:  if successful
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
