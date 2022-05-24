#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: a pointer to a struct of type list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	(void)n;

	/* base recursive condition since the link in last node is NULL */
	if (h == NULL)
		return (0);

	if ((h->str) == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	/* 1 + as a count on each node */
	return (1 + print_list(h->next));
}
