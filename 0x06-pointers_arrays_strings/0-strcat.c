#include <stdio.h>
#include "main.h"

/**
 * _strcat - function appends the src string to the dest string, overwriting
	     the terminating null byte (\0) at the end of dest, and then adds
	     a terminating null byte
 * @src:  pointer to string to be appended
 * @dest: pointer to string to be appended to
 * Return:  pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_src = 0, len_dest = 0, i;

	while (src[len_src] != '\0')
		len_src++;
	while (dest[len_dest] != '\0')
		len_dest++;		

	for (i = 0; i <= len_src; ++i)
	{
		/*printf("%d, %d\n", i, len_dest);*/
		dest[len_dest++] = src[i];

		/*printf("%c, %c, %s\n", src[i], dest[len_dest], dest);*/
	}
	/* dest[len_dest + 1] = '\0';*/

	return dest;


}
