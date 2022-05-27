#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 *		    listint_t list.
 * @h: the head, a pointer variable that holds the pointer to the first node
 * Return: the number of nodes;
 */


size_t listint_len(const listint_t *h)
{
	if (h) /* if h is not NULL */
	{
		return (1 + listint_len(h->next));
	}
	return (0); /* if h is null we return 0 */
}
