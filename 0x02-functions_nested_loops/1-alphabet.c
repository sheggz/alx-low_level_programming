#include "main.h"
/**
 * print_alphabet - print the lowercase alphabets with a function whose prototype
 *	 is in main.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char) i);	
	}
	_putchar('\n');
}
