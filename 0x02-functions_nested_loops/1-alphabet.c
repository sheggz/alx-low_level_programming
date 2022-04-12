#include "main.h"
/**
 * main - print the lowercase alphabets with a function whose prototypr
 * 	 is in main.
 * Return: 0 if successful
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
