#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that prints all the elements of a list_t list
 * @h: a pointer to a struct of type list_t
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{

	/* base recursive condition since the link in last node is NULL */
	if (h == NULL)
		return (0);

	/* 1 + as a count on each node */
	return (1 + list_len(h->next));
}
