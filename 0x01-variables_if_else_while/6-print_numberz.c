#include <stdio.h>
/**
 * main- a code that prints 0-9
 * Return: 0 if code is succesful
*/

int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar((char) i);
	}
	putchar('\n');

	return (0);
}
