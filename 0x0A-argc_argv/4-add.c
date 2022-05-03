#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 numbers supplied during program call in the cmd line
 * @argc: argument counter
 * @argv: argument vector - array of all arguments used to run the program
 * Return: ) if successful
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1) /* if no number is supplied */
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if(*(argv[i]) > 57 || *(argv[i]) < 48)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (0);
}
