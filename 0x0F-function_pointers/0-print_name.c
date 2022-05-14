#include "function_pointers.h"

/**
 * print_name - a function that prints a name in a format determined by
 *		another funtion input
 * @name: pointer to name to be printed
 * @f: a pointer to a fuction that takes in a char pointer and returns nothing
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name); /* defernce function pointer to access code and pass arg */
}
