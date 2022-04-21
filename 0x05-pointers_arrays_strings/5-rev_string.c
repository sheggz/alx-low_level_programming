#include "main.h"
/**
 * rev_string - a fn that prints a string in reverse
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, j = 0, cache, len = 0;

	while (s[len] != '\0')
		len++;

	for(i = len; len >= 0; --len)
	{
		cache = s[i];
		s[i] = s[j];
		s[j++] = cache; /* j is used to run throug the array
				 * from begining
				 */
	}	

}
