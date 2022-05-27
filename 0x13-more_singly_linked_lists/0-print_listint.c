#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that returns the number of elements in a linked
 *		    listint_t list.
 * @h: the head, a pointer variable that holds the pointer to the first node
 * Return: the number of nodes;
 */


size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
	return (0);
}
