#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src, including 
 *	      the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to buffer where string is copied to
 * @src: Pointer to string to be copied
 * Return: a pointer to a character array
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while ((*(src + len) != '\0'))
		++len;

	for (i = 0; i < len; ++i)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

