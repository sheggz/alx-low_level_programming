#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *	memory, which contains a copy of the string given as a parameter.
 * @str: pointer to input string
 * Return: pointer to a memory housing an input string
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int i, len_str = 0;
	char *ptr;

	while (str[len_str] != '\0')
		len_str++;
	ptr = malloc(sizeof(char) * len_str);

	for (i = 0; i < len_str; i++)
		ptr[i] = str[i];
	return (ptr);
}

