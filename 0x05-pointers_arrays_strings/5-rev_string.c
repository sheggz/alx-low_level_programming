#include "main.h"
/**
 * rev_string - a fn that prints a string in reverse
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, j = 0, len = 0;
	char cache;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= len / 2; --i)
	/*
	 * loop starts from len -1 because we must start from
	 * position 0. and we stop at len/2 because if len == 10
	 * then we need 5 steps to swap all the components
	 */
	{
		cache = s[i];
		s[i] = s[j];
		s[j++] = cache; /*
				 * j is used to run throug the array
				 * from begining
				 */
	}
}
