#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns the number of nodes of
 *		    a d-linked list
 * @h: pointer to Node 1 (head pointer)
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (h != NULL)
	{
		return (1 + dlistint_len(h->next));
	}
	/* when we encounter NULL on forward traversal */
	return (0);
}
