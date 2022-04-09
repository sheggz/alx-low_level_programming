#include <stdio.h>
/**
 * main - print the hex digits in lowercase
 * Return: 0 if code runs successfully
*/

int main(void)
{
	int i = 0;

	for (i = 0x30; i < 0x3A; i++)
	{
		putchar((char) i);
	}
	for (i = 0x61; i < 0x67; i++)
	{
		putchar((char) i);
	}
	putchar('\n');

	return (0);
}
