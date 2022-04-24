#include "main.h"

/**
 * _strncat - function appends the src string to the dest string, overwriting
	     the terminating null byte (\0) at the end of dest, and then adds
	     a terminating null byte
 * @src:  pointer to string to be appended
 * @dest: pointer to string to be appended to
 * @n: the most bytes src can use
 * Return:  pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, i;

	while (dest[len_dest] != '\0')
		len_dest++;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[len_dest + i] = src[i];

	dest[len_dest + i] = '\0';

	return (dest);
}
