#include "main.h"
/**
 * print_last_digit - print the last digit of integer n
 * @n: number to be investigated
 * Return: the last digit of the integer argument
*/

int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
