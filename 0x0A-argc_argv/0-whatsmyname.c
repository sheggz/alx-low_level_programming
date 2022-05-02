#include <stdio.h>

/**
 * main -print the name of the program using argv
 * @argc: argument counter
 * @argv: argument vector - array of all arguments used to run the program
 * Return: ) if successful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;

	return (0);
}
