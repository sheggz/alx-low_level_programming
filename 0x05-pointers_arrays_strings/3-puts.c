#include "main.h"
/**
 * _ puts : a fn that uses _putchar to print to std out
 * @str: pointer to a string
 */

void _puts(char *str)
{
	int i = 0;
	
	while (1)
	{
		if (str[i] != '\0')
			_putchar(*(str + i));
		else
			break;	
		i++;
	}
}
