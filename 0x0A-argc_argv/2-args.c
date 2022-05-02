#include <stdio.h>

/**
 * main -print the name of the program using argv
 * @argc: argument counter
 * @argv: argument vector - array of all arguments used to run the program
 * Return: ) if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
