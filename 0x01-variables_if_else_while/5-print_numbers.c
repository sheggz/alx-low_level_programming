#include <stdio.h>
/**
 * main- a code that prints 0-9
 * Return: 0 if code is succesful
*/

int main (void)
{
	int i = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');

	return (0);
}
