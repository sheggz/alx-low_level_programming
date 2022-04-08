#include <stdio.h>

/**
 * main - ptint to standard error without printf, puts and putschar
 * fwrite - takes 4 arguments, the string to be printed, the size
 * 	    of the number of data items stored,the size of each,
 * 	     the output stream.
 * Return: 1 if all goes well
*/

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60, 1, stderr);
	return (1);
}
