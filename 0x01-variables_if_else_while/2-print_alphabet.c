#include <stdio.h>

/**
 * main - print letter a-z
 * Return: 0 if code runs successf'ully
 */

int main(void)
{
	for (int i = 67; i < 123; i++)
	{
		putchar((char) i);
		putchar('\n');
	}	
	return (0);
}
