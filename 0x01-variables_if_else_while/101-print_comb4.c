#include <stdio.h>
/**
 * main - useing 3 nested for loops anf if statements
 * we print the least possinle combinations of 3 single
 * digits while inserting a comma and space after each
 * except the lastcombination
 * Return: 0 if successful
*/

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						return (0);
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

