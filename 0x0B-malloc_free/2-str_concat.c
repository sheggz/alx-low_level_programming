#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to a first part of string to be concatenated
 * @s2: pointer with second string to be concatenated with first
 * Return: pointer should point to a newly allocated space in memory which
 *	   contains the contents of s1, followed by the contents of s2,
 *	   and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, len_str1 = 0, len_str2 = 0;
	char *ptr;

	while (*(s1 + len_str1) != '\0')
		len_str1++;
	while (s2[len_str2] != '\0')
		len_str2++;

	if (len_str1 == 0 && len_str2 != 0)
	{
		ptr = malloc(sizeof(char) * len_str2 + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i <= len_str2; ++i)
			ptr[i] = s2[i];
		return (ptr);
	}
	else if (len_str2 == 0 && len_str1 != 0)
	{
		ptr = malloc(sizeof(char) * len_str1 + 1);
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i <= len_str2; ++i)
			ptr[i] = s1[i];
		return (ptr);
	}
	else if (len_str2 == 0 && len_str1 == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * (len_str2 + len_str1 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_str1; ++i)
		ptr[i] = s1[i];

	for (i = 0; i <= len_str2; ++i)
		ptr[len_str1 + i] = s2[i];

	return (ptr);
}
