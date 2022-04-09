#include <stdio.h>

/**
 * main - print letter a-z in reverse
 * Return: 0 if code runs successf'ully
 */

int main(void)
{
	int i = 0;

	for (i = 122; i > 96; i--)
	{
		putchar((char) i);
	}

	putchar('\n');

	return (0);
}
