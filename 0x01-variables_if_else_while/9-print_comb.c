#include <stdio.h>
/**
 * main- a program to print 0-9 with comma and space using
 * 	putchar only.
 * Return: 0 if successful
*/

int main(void)
{
	char ch;
	
	for (ch = '0'; ch < ':'; ch++) /* : is next atfer 9 on the ascii table
					  i could've used <= 9 */
	{
		purchar(ch);
		if (ch != '9')
		{	
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	
	return (0);
}
