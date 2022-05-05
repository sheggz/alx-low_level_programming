#include "main.h"

/**
 * _memcpy - a function that fills a memory  block with a constant byte.
 * @src: pointer to the memory area to be copied
 * @dest: pointer to the begining of destination memory
 * @n: memory bytes to be copied starting from address at s
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* A RECURSIVE APPROACH THAT WORKS, but marked wrong by checker */

	/*
	 * if (n == 0)
	 *	return (dest);
	 * *dest = *src;
	 * return (_memcpy((dest + 1), src + 1, n - 1));
	 */
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
		*(dest + i) = *(src + i);
	return (dest);

}



