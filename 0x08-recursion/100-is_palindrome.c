#include "main.h"
void fill_forward(char *w);
void fill_reverse(char *x);
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 *		   and 0 if not
 * @s: pointer to string to be investigated
 * Return: 1 if palindrome, 0 if not
 */


int is_palindrome(char *s)
{
	int i = 0;
	char forward [100];
	char reverse [100];

	fill_forward(s);
	i = 0;
	fill_reverse(s);

	if (forward = reverse)
		return (1);
	else
		return (0);
}

void fill_forward(char *w)
{
	if (*w == '\0')
		return;
	forward[i++] = *w;
	fill_forward(w + 1);
}

void fill_reverse(char *x)
{
	if (*x == '\0')
		return;
	fill_reverse(x + 1);
	reverse[i++] = *x;
}
