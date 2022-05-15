#include "3-calc.h"
#include "string.h"
#include <stdlib.h>

/**
 * get_op_func - is a function that takes a pointer to
 *		a charcter and returns a pointer to a function that
 *		takes 2 integers as arguments and returns an integer
 * @s: pointer to a character
 * Return: a pointer to a function that takes 2 integers as arguments
 *	   and returns an integer
 */
int (*get_op_func(char *s))(int, int)
/*
 * get_op_func (char *s) * (int, int) int
 */

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
