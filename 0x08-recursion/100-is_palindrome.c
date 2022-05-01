#include "main.h"
void fill_forward(char *w, int []);
void fill_reverse(char *x, int []);
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

	fill_forward(s, forward);
	i = 0;
	fill_reverse(s, reverse);

	if (forward == reverse)
		return (1);
	else
		return (0);
}

void fill_forward(char *w, int forward_arr [])
{
	if (*w == '\0')
		return;
	forward_arr[i++] = *w;
	fill_forward(w + 1, forward_arr);
}

void fill_reverse(char *x, int reverse_arr [])
{
	if (*x == '\0')
		return;
	fill_reverse(x + 1, reverse_arr);
	reverse_arr[i++] = *x;
}
