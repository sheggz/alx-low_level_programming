#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a function to handle basic calculations
 * @argc: number of arguments
 * @argv: one dimensional array of strings, containing all arguments
 *	 passed at runtime
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int ans, arg_conv[2];
	/* char *arr_sym[] = {"+", "-", "*", "/", "%"}; */
	int (*fnc_ptr)(int, int);

	/* printf("%d\n", argc); - for debugging*/
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	/* for (i = 0; i < 5; i++) */
	fnc_ptr = get_op_func(argv[2]);
	/* printf("%p\n", get_op_func(argv[2])); */
	if (/* strcmp(argv[2], arr_sym[i]) == 0 */ fnc_ptr != NULL)
	{
		arg_conv[0] = atoi(argv[1]);
		arg_conv[1] = atoi(argv[3]);

		if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)) && arg_conv[1] == 0)
		{
			printf("Error");
			exit(100);
		}
		/* fnc_ptr = get_op_func(argv[2]); */
		ans = (*fnc_ptr)(arg_conv[0], arg_conv[1]);
		printf("%d\n", ans);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
