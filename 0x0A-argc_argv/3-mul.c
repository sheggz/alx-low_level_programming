#include <stdio.h>

/**
 * main -print the name of the program using argv
 * @argc: argument counter
 * @argv: argument vector - array of all arguments used to run the program
 * Return: ) if successful
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result = result * argv[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
