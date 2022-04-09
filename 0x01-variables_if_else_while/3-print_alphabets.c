#include <stdio.h>

/**
 * main - print letter a-z and A-Z on same line
 * Return: 0 if code runs successf'ully
 */

int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		putchar((char) i);
	}
	for (i = 65; i == 90; i++)
	{
		putchar((char) i);
	}

	putchar('\n');

	return (0);
}
