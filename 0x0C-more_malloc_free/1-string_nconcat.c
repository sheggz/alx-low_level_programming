#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: pointer to part A of strings to be concatenated
 * @s2: pointer to part B of strings to be concatenated
 * @n: the number of bytes of s2 to be concatenated to s1
 * Return:  NULL if function fails else, pointer to newly allocated
 *	    space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1 = 0, len_s2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + len_s1) != '\0')
		++len_s1;
	while (*(s2 + len_s2) != '\0')
		++len_s2;


	if (n >= len_s2)
	{
		ptr = malloc(len_s1 + len_s2 + 1);
	}
	else
	{
		len_s2 = n;
		ptr = malloc(len_s1 + len_s2 + 1);
	}
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len_s1; ++i)
		ptr[i] = s1[i];
	for (i = 0; i < len_s2; ++i)
		ptr[len_s1 + i] = s2[i];
	ptr[len_s1 + len_s2 + 1] = '\0';
	return (ptr);	
}
