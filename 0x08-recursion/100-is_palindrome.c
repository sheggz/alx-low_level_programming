#include "main.h"
void fill_forward(int *, char *w, char []);
void fill_reverse(int *, char *x, char []);
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

	fill_forward(&i, s, forward);
	i = 0;
	fill_reverse(&i, s, reverse);

	if (forward == reverse)
		return (1);
	else
		return (0);
}

void fill_forward(int *i, char *w, char forward_arr [])
{
	if (*w == '\0')
		return;
	forward_arr[*i++] = *w;
	fill_forward(&(*i), w + 1, forward_arr);
}

void fill_reverse(int *i, char *x, char reverse_arr [])
{
	if (*x == '\0')
		return;
	fill_reverse(&(*i), x + 1, reverse_arr);
	reverse_arr[*i++] = *x;
}
