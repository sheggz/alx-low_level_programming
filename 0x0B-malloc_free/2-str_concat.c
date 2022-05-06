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

	/* CACL len of strings if address supplied != NULL */
	if (s1 != NULL)
	{
		while (*(s1 + len_str1) != '\0')
			len_str1++;
	}
	if (s2)
	{
		while (s2[len_str2] != '\0')
			len_str2++;
	}

	/* case 1, if (*s1 == "" or s1 = null) and s2 points to a string */
	if ((len_str1 == 0 || s1 == NULL) && len_str2 != 0)
	{
		ptr = malloc(sizeof(char) * len_str2 + 1);
		if (ptr == NULL) /* handle malloc return incase of error */
			return (NULL);
		for (i = 0; i <= len_str2; ++i)
			ptr[i] = s2[i];
		return (ptr);
	}

	/* case 2, if (*s2 == "" or s2 = null) and s1 points to a string */
	else if ((len_str2 == 0 || s2 == NULL) && len_str1 != 0)
	{
		ptr = malloc(sizeof(char) * len_str1 + 1);
		if (ptr == NULL) /* handle malloc return incase of error */
			return (NULL);
		for (i = 0; i <= len_str1; ++i)
			ptr[i] = s1[i];
		return (ptr);
	}

	/* case 3, if (*s1 == "" or s1 = null) and (*s2 == "" or s2 == NULL) */
	else if ((len_str2 == 0 || s2 == NULL) && (len_str1 == 0 || s1 == NULL))
		return ("");

	/* case 4, if s1 and s2 points to a string*/
	ptr = malloc(sizeof(char) * (len_str2 + len_str1 + 1));

	if (ptr == NULL) /* handle malloc return incase of error */
		return (NULL);

	for (i = 0; i < len_str1; ++i)
		ptr[i] = s1[i];

	for (i = 0; i <= len_str2; ++i)
		ptr[len_str1 + i] = s2[i];

	return (ptr);
}
