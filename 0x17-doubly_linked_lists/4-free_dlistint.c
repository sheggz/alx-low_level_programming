#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - a fn that frees a d-linked list
 * @head: local pointer to first node of d-linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}
	free_dlistint(head->next);
	free(head);
}
