#include "main.h"
void fill_forward(int *, char *w, char []);
void fill_reverse(int *, char *x, char []);
int strcomp(char *a, char *b);

/*
 * MY APPROACH (not efficient)
 * create an array with the string spelt normally using recursion
 * create an array with the string spelt in reverse using recursion
 * compare both using recursion
 */

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 *                 and 0 if not
 * @s: pointer to string to be investigated
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	char forward[1000]; /* we're supposed to get the length and
			     * create an array of dat length bt here, we assume
			     */
	char reverse[1000];

	fill_forward(&i, s, forward);
	forward[i++] = '\0';

	i = 0;
	fill_reverse(&i, s, reverse);
	reverse[i++] = '\0';
	/* printf("%s \n%s\n", forward, reverse); */
      /*  if (forward == reverse) */
	 /* this sort of direct comparison cant work for arrays */

	return (strcomp(forward, reverse));
}

/**
 * fill_forward - a function that uses recursion to fill
 *		  the forward array.
 * @i: pointer to iterating variable
 * @w: pointer to first character of string under investigation
 * @forward_arr: array variable that holds forward array
 */

void fill_forward(int *i, char *w, char forward_arr[])
{
	if (*w == '\0')
		return;
	forward_arr[(*i)++] = *w;
	fill_forward(&(*i), w + 1, forward_arr);
	return;
}

/**
 * fill_reverse - a function that uses recursion to fill
 *		  the reverse array.
 * @i: pointer to iterating variable
 * @x: pointer to first character of string under investigation
 * @reverse_arr: local array variable that holds reverse array
 */

void fill_reverse(int *i, char *x, char reverse_arr[])
{
	if (*x == '\0')
		return;
	fill_reverse(&(*i), x + 1, reverse_arr);
	reverse_arr[(*i)++] = *x;
	return;
}

/**
 * strcomp - a function that uses recursion to compare 2 char arrays
 * @a: pointer to first character of forward array
 * @b: pointer to first character of reverse<F8> array
 * Return: 1 if similar, 0 if not.
 */
int strcomp(char *a, char *b)
{
	if (*a != *b)
		return (0);
	if (*a == '\0' && *b == '\0')
		return (1);
	return (strcomp((a + 1), (b + 1)));
}
