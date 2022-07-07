#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - a function that returns the number of nodes of
 *		    a d-linked list
 * @h: pointer to Node 1 (head pointer)
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (h != NULL)
	{
		printf("%d", h->n);
		return (1 + print_dlistint(h->next));
	}
	/* when we encounter NULL on forward traversal */
	return (0);
}
