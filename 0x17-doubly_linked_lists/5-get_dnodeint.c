#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a fn that returns the nth node of a d-linked list.
 * @index: index of node to be returned
 * @head: local variable aith address to node 1
 * Return: address of required node or NULL if idx is wrong
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count += 1;
	}
	/* if index isnt found */
	return (NULL);
}

