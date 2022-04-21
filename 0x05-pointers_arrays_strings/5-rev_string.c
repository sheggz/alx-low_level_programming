#include "main.h"
/**
 * rev_string - a fn that prints a string in reverse
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int i, cache, len = 0;

	while (s[len] != '\0')
		len++;

	for(len; len >= 0; --len)
	{
		cache = s[len];
		s[len] = s[i];
		s[i++] = cache;
	}	

}
