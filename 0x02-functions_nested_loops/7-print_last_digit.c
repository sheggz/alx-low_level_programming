#include "main.h"
/**
 * print_last_digit - print value of the last digit of integer n
 * + int value of char '0'
 * 
 * @n: number to be investigated
 * 
 * Return: the last digit of the integer argument(+ve or -ve)
*/

int print_last_digit(int n)
{	
	int P;
	
	if (n < 0)
	{
		 _putchar((-1 * (n % 10)) + '0');
		 return (-1 * (n % 10));
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
