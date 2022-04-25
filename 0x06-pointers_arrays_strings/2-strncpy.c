#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: pointer to Buffer where src is to be copied to 
 * @src: string to be copied
 * @n: max no of bytes to be copied
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
	
