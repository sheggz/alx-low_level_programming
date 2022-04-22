#include "main.h"

/**
 * _strcat - function appends the src string to the dest string, overwriting
	     the terminating null byte (\0) at the end of dest, and then adds
	     a terminating null byte
 * @src - pointer to string to be appended
 * @despointert to string to be appended to
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_src = 0, len_dest = 0, i;

	while (src[len_src] != '\0')
		len_src++;
	while (src[len_dest] != '\0')
		len_dest++;		

	for (i = 0; i <= len_src; ++i)
	{
		 dest[len_dest++] = src[i];
	}

	return dest;


}
